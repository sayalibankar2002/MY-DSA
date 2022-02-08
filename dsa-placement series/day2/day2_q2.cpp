#include <iostream>
using namespace std;

//left shift of an array
void leftshiftby1(int a[],int n){
    int temp=a[0],i;
    for(i=0;i<n-1;i++)
    a[i]=a[i+1];
    a[n-1]=temp;
}
void leftshift(int a[],int d,int n){
    for(int i=0;i<d;i++)
    leftshiftby1(a,n);
}
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[]={2,3,5,7,8,4};

    int n=sizeof(a)/sizeof(a[0]);

    leftshift(a,3,n);
    display(a,n);
}