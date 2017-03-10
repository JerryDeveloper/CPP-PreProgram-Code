#include <iostream>
#include <fstream>
#include "Bond.h"

using namespace std;

int main()
{
   ofstream myfile;
   myfile.open ("Assignment5Q1.csv");
   myfile << "bond,principal,coupon,recoveryRate,timeToMaturity,price,ytm,dp,modifiedDuration" << endl;

   {

        double principal = 1000;
        double coupon = 50;
        double timeToMaturity = 10;
        double recoveryRate = 0.4;
    
        Bond b(principal, coupon, recoveryRate, timeToMaturity);
        double P = b.getPrice(0.06);
        double YTM = b.getYTM(1010.0);
        double dp = b.getDefaultProbability(5, 999.45, 0.01);
        double md = b.getModifiedDuration(0.06);

        myfile << "1," << principal << "," << coupon << "," << recoveryRate << "," << timeToMaturity << "," << P << "," << YTM << "," << dp << "," << md << endl;
   }
    
   {

        double principal = 100;
        double coupon = 6;
        double timeToMaturity = 5.25;
        double recoveryRate = 0.3;
    
        Bond b(principal, coupon, recoveryRate, timeToMaturity);
        double P = b.getPrice(0.04);
        double YTM = b.getYTM(99.0);
        double dp = b.getDefaultProbability(4.1, 99.45, 0.02);
        double md = b.getModifiedDuration(0.05);

        myfile << "2," << principal << "," << coupon << "," << recoveryRate << "," << timeToMaturity << "," << P << "," << YTM << "," << dp << "," << md << endl;
   }
    
   
    {

        double principal = 100;
        double coupon = 10;
        double timeToMaturity = 15.65;
        double recoveryRate = 0.45;
    
        Bond b(principal, coupon, recoveryRate, timeToMaturity);
        double P = b.getPrice(0.09);
        double YTM = b.getYTM(102.0);
        double dp = b.getDefaultProbability(10.1, 101, 0.01);
        double md = b.getModifiedDuration(0.1);

        myfile << "3," << principal << "," << coupon << "," << recoveryRate << "," << timeToMaturity << "," << P << "," << YTM << "," << dp << "," << md << endl;
   }
    
   
    myfile.close();        
    
    return 0;
}