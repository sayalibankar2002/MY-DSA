#include <iostream>
using namespace std;

//linear search
struct array
{
    int A[10];
    int size;
    int length;
};
void Display(struct array arr){
    int i;
    cout<<"\nElements are:"<<endl;
    for(i=0;i<arr.length;i++)
    cout<<arr.A[i]<<endl;
    
}

int search(struct array arr,int key){
    int i;
    for(i=0;i<arr.length;i++){
    if(key==arr.A[i]){
    return i;
    }
}
    return -1;
}
int main(){
    struct array arr={{2,3,4,5,6},5,10};

    cout<<"index is:"<<search(arr,4)<<endl;
    Display(arr);

    return 0;
}