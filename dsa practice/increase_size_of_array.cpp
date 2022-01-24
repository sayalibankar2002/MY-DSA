#include <iostream>
using namespace std;

//increase the size of array
int main(){
    int *p,*q;
    int i;
    p=(int *)malloc(5*sizeof(int));//memory allocation for pointer p
    p[0]=3,p[1]=5,p[2]=8,p[3]=12,p[4]=22;

    q=(int *)malloc(10*sizeof(int));//memory allocation for pointer q

    for(i=0;i<5;i++){
        q[i]=p[i];
    }
    free(p);
    p=q;
    q=NULL;

    for(i=0;i<5;i++)
        cout<<p[i]<<endl;

    return 0;
}