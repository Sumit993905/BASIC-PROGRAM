#include<iostream>
using namespace std;

int sumOfTwoNumber(int num1, int num2){
    return num1+num2;
}


int main(){
    
    int num1, num2;
    cout<<"Enter First Number :"<<endl;
    cin>>num1;
    cout<<"Enter Second Number :"<<endl;  
    cin>>num2;
    
    cout<<"Sum of Two Number is :"<<sumOfTwoNumber(num1,num2);
 
    return 0;
}