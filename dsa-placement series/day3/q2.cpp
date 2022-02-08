#include<iostream>
using namespace std;

//reverse the array
void reverseArray(int a[],int n){
    for(int l=0,h=n-1;l<h;l++,h--){
        swap(a[l],a[h]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int arr1[]={2,4,6,7,8};
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<" "<<endl;
    }
    int n=sizeof(arr1)/sizeof(arr1[0]);
    cout<<"reverse"<<endl;

    reverseArray(arr1,n);

    return 0;
}