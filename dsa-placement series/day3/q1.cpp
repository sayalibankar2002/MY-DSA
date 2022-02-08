#include <iostream>
using namespace std;

//finding elements in array-Binary search
struct array{
    int a[10];
    int size;
    int length;
};
void display(struct array arr){
    int i;
    for(i=0;i<arr.length;i++)
    cout<<arr.a[i]<<" ";
}

//iterative version
int BinarySearch(struct array arr,int key){
    int l,mid,h;
    l=0;
    h=arr.length-1;
    while (l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.a[mid])
        return mid;
        else if(key < arr.a[mid])
        h=mid-1;
        else
        l=mid+1;
    }
    return -1;
    
}

//recursive method;
int RBinarySearch(int a[],int l,int h,int key){
    int mid=0;
    if(l<=h){
    mid=(l+h)/2;
    if(key==a[mid])
    return mid;
    else if(key < a[mid])
    return RBinarySearch(a,l,mid-1,key);
    else
    return RBinarySearch(a,mid+1,h,key);
    }
    return -1;
}

int main(){
    struct array arr1={{3,5,8,2,7,6,9},10,7};
    cout<<"serch element"<<BinarySearch(arr1,2);

    display(arr1);

    return 0;
}