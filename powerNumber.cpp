#include<iostream>
using namespace std;

double power(double base, int exp) {
    if (exp > 0)
        return (power(base, exp - 1) * base);
    else if (exp < 0)
        return (power(base, exp + 1) / base);
    else
        return 1;
}

int main() 
{
    double base = 1.5;
    int expo = -2;
    double res = 1.0;
    
    
    cout << "Result = " << power(base, expo);
    
    return 0;
}