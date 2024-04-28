// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main(){
    int num , reverse = 0 , rem , temp;
    cout<<"Enter the number : "<<endl;
    cin>>num;

    temp = num;
    
    while(temp!=0){
        rem = temp%10;
        reverse = reverse*10 + rem;
        temp=temp/10;
        
    }
    if(num==reverse){
        cout<<"Given Number is Palindrome"<<endl;
    }
    else{
        cout<<"Given Number is not Palindrome"<<endl;
    }
    return 0;
}