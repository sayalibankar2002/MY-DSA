#include <iostream>
using namespace std;

//deleting from a given position in array
struct array
{
    int A[15];
    int size;
    int length;
};
void diplay(struct array a){
    for(int i=0;i<a.length;i++)
    cout<<a.A[i]<<" ";
}
int Delete(struct array *a,int index){
    int x=0;
    int i;
    if(index >=0 && index<a->length){
        x=a->A[index];
        for(i=index;i<a->length-1;i++)
        a->A[i]=a->A[i+1];
        a->length--;
        return x;
    }
    return 0;
}
int main(){
    struct array arr={{4,6,2,5,8,9},10,6};
    cout<<Delete(&arr,6);

    diplay(arr);

    return 0;
}