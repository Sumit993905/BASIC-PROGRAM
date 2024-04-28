// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

bool isPrime(int n){
    if(n==0 || n==1){
     return 0;
    }
    
    for(int i=2 ; i<n ; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    // Write C++ code here
   int n;
   cin>>n;
   
   if(isPrime(n)){
       cout<<"Prime"<<endl;
   }
   else{
       cout<<"Not Prime"<<endl;
       
   }

    return 0;
}