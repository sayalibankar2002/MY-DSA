#include <iostream>
using namespace std;

//reversing array
struct array{
    int A[10];
    int size;
    int length;
};
void Display(struct array arr){
    cout<<"\nElements in an array:\n"<<endl;
    for(int i=0;i<arr.length;i++)
    cout<<arr.A[i]<<endl;
}
int reverse(struct array *arr)
{
    int *B;
    int i,j;

    B=(int*)malloc(arr->length*sizeof(int));//memory allocation for pointer B
    for(i=arr->length-1,j=0;i>=0; i--,j++){
        B[j]=arr->A[i];//inserting values of array A in B for reversing
    }
    
    for(i=0;i<arr->length;i++){
        arr->A[i]=B[i];
    }
}
int main(){
    struct array arr={{2,3,4,5,6},10,5};

    reverse(&arr);
    Display(arr);
}
