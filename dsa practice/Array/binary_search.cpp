#include<iostream>
using namespace std;

//binary search
struct array{
    int A[10];
    int size;
    int length;
};
void Display(struct array arr){
    int i;
    cout<<"Elements are:"<<endl;
    for( i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}
/*int BinSearch(struct array arr,int key){
    int l,h,mid;
    l=0;
    h=arr.length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(key==arr.A[mid])
        return mid;
        else if(key<arr.A[mid])
        h=mid-1;
        else
        l=mid+1;

    }
    return -1;
}*/
//recursive version of binary search
int RBinSearch(int a[],int l,int h,int key){
    int mid;
    if(l<=h){
        mid=(l+h)/2;
        if(key==a[mid]){
            return mid;
        }
        else if(key<a[mid]){
            return RBinSearch(a,l,mid-1,key);
        }
        else{
            return RBinSearch(a,mid+1,h,key);
        }
        return -1;
    }

}
int main(){
    struct array arr={{2,3,4,5,6},5,10};

    cout<<"index is:"<<RBinSearch(arr.A,0,arr.length,9 )<<endl;
    Display(arr);

    return 0;
}
