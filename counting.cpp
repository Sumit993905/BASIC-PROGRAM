// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

void printCounting(int num){
    if(num==0)
    {
        cout<<"Increase Ranage , Please! "<<endl;
        
    }
   
    for(int i=1; i<=num; i++){
        cout<<"Number is :"<<i<<endl;
    }
    
}

int main() {
    // Write C++ code here
   int num;
   cout<<"Enter the Number : "<<endl;
   cin>>num;
   
   printCounting(num);
   
   
    return 0;
}