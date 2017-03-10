#include <math.h>
#include "Bond.h"

double Bond::getPrice(double YTM)
{
    double price = principal * pow(1/(1 + YTM), time_to_maturity);
    for(size_t i = 0; time_to_maturity - i > 0; ++i)
    {
        price += coupon * pow(1/(1 + YTM), time_to_maturity - i);
    }
    
    return price;
}

double Bond::getYTM(double price)
{
    // use secant method
    const double epsilon = 1e-10;
    double cur_ytm = 0;
    double step = 0.1;
    
    while(abs(getPrice(cur_ytm) - price) > epsilon && getPrice(cur_ytm) - getPrice(cur_ytm - step) != 0)
    {
        cur_ytm = cur_ytm - (getPrice(cur_ytm) - price) * step / (getPrice(cur_ytm) - getPrice(cur_ytm - step));
    }
    
    return cur_ytm;
}

double Bond::getHazardRate(double price, double r)
{
    return (getYTM(price) - r)/(1 - recovery_rate);
}

double Bond::getDefaultProbability(double t, double price, double r)
{
    return 1 - exp(getHazardRate(price, r) * t);
}

double Bond::getModifiedDuration(double YTM)
{
    double price = getPrice(YTM);
    return 100 * (price - getPrice(YTM + 0.01)) / price;
}