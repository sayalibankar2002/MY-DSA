#include <iostream>
using namespace std;

//get function in array
struct array{
    int A[10];
    int size;
    int length;
};
void Display(struct array arr){
    for(int i=0;i<arr.length;i++){
        cout<<"elements:\n"<<endl;
        cout<<arr.A[i]<<endl;
    }
}
int get_func(struct array arr,int index){
    //checking if index is valid or not
    if(index>=0 && index<arr.length){
        return arr.A[index];
    }
    return -1;
}
int set_func(struct array *arr,int index,int x){
    if(index>=0 && index<arr->length){
         arr->A[index]=x;
    }
}
int max_func(struct array arr){
    int max=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++){
        if(arr.A[i]>max){
            max=arr.A[i];
        }
        return max;
    }

}
int min_func(struct array arr){
    int min=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++){
        if(arr.A[i]<min){
            min=arr.A[i];
        }
        return min;
    }

}
int sum_func(struct array arr){
    int s=0;
    int i;
    for(i=0;i<arr.length;i++){
        s+=arr.A[i];
    }
    return s;
}
float avg_func(struct array arr){
    return (float)sum_func(arr)/arr.length;
}
int main(){
    struct array arr={{2,3,4,5},10,5};

    set_func(&arr,0,15);
    Display(arr);
}