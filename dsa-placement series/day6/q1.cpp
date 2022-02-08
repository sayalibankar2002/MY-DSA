#include <iostream>
using namespace std;

//Write a program to get an element at an given index and set new element in array at given index
int main(){
    int a[100]={0};
    int i,x,pos,n=10;

    for( i=0;i<10;i++){
        arr[i]=i+1;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    x=50;
    pos=5;
    n++;
    for(i=0;i<n;i++){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=x;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}