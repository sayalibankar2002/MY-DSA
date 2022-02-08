#include <iostream>
using namespace std;

//program to insert element at given position in array
struct array{
    int a[10];
    int size;
    int length;
};

void display(struct array arr){
    for(int i=0;i<arr.length;i++)
    cout<<arr.a[i]<<" ";
}

void insert(struct array *arr,int index,int x){
    int i;
    if(index >=0 && index <=arr->length){
        for(i=arr->length ;i>index;i--)
            arr->a[i]=arr->a[i-1];
        arr->a[index]=x;
        arr->length++;
    }
}

int main(){
    struct array arr1={{3,6,8,2,4},10,5};

    insert(&arr1,2,7);
    display(arr1);

    return 0;
}