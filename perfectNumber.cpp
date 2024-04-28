#include <iostream>
#include <math.h>
using namespace std;

int getDivisorsSum(int n)
{
    int sum = 0;
    
    for(int i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            
            if(i == 1)
                sum = sum + i;
            
           
            else if(i == n/i)
                sum = sum + i;
            
            
            else
                sum = sum + i + n/i;
        }
    }
    return sum;
}
int main ()
{
    int n = 28, sum = 0;
    
    if(n == getDivisorsSum(n))
        cout << n << " is a perfect number";
    else
        cout << n << " is not a perfect number";
    

}