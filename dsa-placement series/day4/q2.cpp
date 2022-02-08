#include <iostream>
using namespace std;

//Implement a program to perform right shift operation on an array and then print it in reversed manner. *
void right_rotate_by1(int arr[],int n){
    int temp=arr[n-1],i;
    for(i=n-1;i>0 ;i--)
    arr[i]=arr[i-1];
    arr[0]=temp;
}

void right_rotate(int arr[],int x,int n){
    for(int i=0;i<x;i++)
    right_rotate_by1(arr,n);
}

int main(){
    int arr[]={1,2,3,4,5,6};

    int n=sizeof(arr)/sizeof(arr[0]);
    int x=2;
    right_rotate(arr,x,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}