#include <iostream>
using namespace std;

//set operation in array
struct array{
    int A[10];
    int size;
    int length;
};
void Display(struct array arr){
    cout<<"Element is:\n"<<endl;
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}
struct array* Union(struct array *arr1,struct array *arr2)
{
    int i,j,k;
    i=j=k=0;

    struct array *arr3=(struct array *)malloc(sizeof(struct array));

    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->[j]){
        arr3->A[k++]=arr1->A[i++];
        }
        else if(arr2->A[j]<arr1->A[i]){

        arr3->A[k++]=arr2->A[j++];
        }
        else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }

    }
    for(;i<arr1->length;i++)
    arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
    arr3->A[k++]=arr2->A[j];

    arr3->length=k;
    arr3->size=10;

    return arr3;


}
int main(){
    struct array arr1={{2,3,6,8,4},10,5};

    struct array arr2={{3,5,4,6,8},10,5};

    struct  array *arr3;
    arr3=Union(&arr1,&arr2);
    Display(*arr3);

    return 0;
    
}


    

