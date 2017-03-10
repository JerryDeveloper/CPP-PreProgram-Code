#include <iostream>

using namespace std;

class SimpleFunction
{
    virtual double f(double x) = 0;
};

class F1 : public SimpleFunction
{
public:
    double A;
    double B;
    double C;
    double D;
    
    F1(double a, double b, double c, double d)   : A(a), B(b), C(c), D(d) {}
    
    virtual double f(double x)
    {
        return A * x * x * x + B * x * x;
    }
};

int main(int argc, char **argv)
{
    F1 f1(1,2,3,4);
    cout << f1.f(3) << endl;
    return 0;
}
