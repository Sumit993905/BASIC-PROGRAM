#include<iostream>
using namespace std;

int firstOcc( int arr[], int size, int key){
    int start,end, mid, ans;

    start=0;
    end= size-1;
    mid= start + (end - start)/2;
    ans=-1;

    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            end = mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if (key<arr[mid]){
            end= mid-1;
        }
        
        mid= start + (end - start)/2;
        
    }
    return ans;
}

int lastOcc( int arr[], int size, int key){
    int start,end, mid, ans;

    start=0;
    end= size-1;
    mid= start + (end - start)/2;
    ans=-1;

    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            start = mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if (key<arr[mid]){
            end= mid-1;
        }
        
        mid= start + (end - start)/2;
        
    }
    return ans;
}

int main(){

    int even[6]={2,4,6,6,6,8};

    cout<<"First index 0f 6 at Index"<< firstOcc(even , 6 , 6)<<endl;

    cout<<"Last index 0f 6 at Index"<< lastOcc(even , 6 , 6)<<endl;


    return 0;
}