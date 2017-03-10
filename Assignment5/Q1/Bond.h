#ifndef _BOND_H_
#define _BOND_H_

class Bond
{
public:
    Bond(double p, double c, double r, double t) : principal(p), coupon(c), recovery_rate(r), time_to_maturity(t) {}
    double getPrice(double YTM);
    double getYTM(double price);
    double getHazardRate(double price, double r);
    double getDefaultProbability(double t, double price, double r);
    double getModifiedDuration(double YTM);
private:
    double principal;
    double coupon;
    double recovery_rate;
    double time_to_maturity;
};

#endif