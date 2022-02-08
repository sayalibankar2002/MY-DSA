#include <iostream>
using namespace std;

//max min in array
struct array
{
    int a[15];
    int size;
    int length;
};


//maximum function in array
int Max(struct array arr){
    int max=arr.a[0];
    for(int i=1;i<arr.length;i++){
        if(arr.a[i]>max)
        max=arr.a[i];
    }
    return max;
}

//minimum function in array
int min(struct array arr){
    int min=arr.a[0];
    for(int i=1;i<arr.length;i++){
        if(arr.a[i]<min)
        min=arr.a[i];
    }
    return min;

}
int main(){
    struct array A1={{2,4,6,8,3,6},10,6};
    cout<<min(A1);
    return 0;
}
