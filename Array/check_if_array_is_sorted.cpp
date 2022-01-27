
#include <iostream>
using namespace std;

//checkmif array is sorted or not
struct array{
    int A[10];
    int size;
    int length;
};
void Display(struct array arr){
    cout<<"Elements are:"<<endl;
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}
int sorted(struct array *arr,int x){
    int i=arr->length-1;
    if(arr->length==arr->size)
    return;
    while(i>=0 && arr->A[i]>x){
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}
//to check if Array is sorted or not
int isSortd(struct array arr){
    int i;
    for(i=0;i<arr.length-1 ;i++){
        if(arr.A[i]>arr.A[i+1])
        return 0;
    }
    return 1;
}
//all -ve number on left side
/*int Rearrange(struct array *arr){
    int i,j;
    i=0;
    j=arr->length-1;
    while(i<j){
        while(arr->A[i]<0)
        i++;
        while(arr->A[i]>=0)
        j--;
        if(i<j)
        swap(&arr->A[i],&arr->A[j]);
    }
}*/
int main(){
    struct array arr={{2,3,12,15,20},10,5};

    isSortd(arr);
    Display(arr);
}