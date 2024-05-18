#include<iostream>
using namespace std;

void print(int arr[] , int n , int start = 0){
    for(int i=start ; i<n ; i++ ){
        cout<<arr[i]<<endl;

    } 
}

int main(){

    int arr[5] = {1,2,4,7,8};

    int size =5;
    cout<<"Set the Starting Value : "<<endl;

    // without set starting value
    print(arr , size); 

    // set Starting value

    print(arr , size , 2);

    return 0;
}



