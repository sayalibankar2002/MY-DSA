#include <bits/stdc++.h>
using namespace std;

//Implement code to find intersection of two sorted array
void intersection(int a[],int b[],int n,int m){
    int i=0,j=0;
    while (i<n && j<m)
    {
        if(a[i]>b[j]){
            j++;
        }
        else if(b[j]>a[i]){
            i++;
        }
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
    
}

int main(){
    int a[]={1,3,3,2,5,7};
    int b[]={1,2,4};

    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);

    sort(a,a+n);
    sort(b,b+m);

    intersection(a,b,n,m);
}