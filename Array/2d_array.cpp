#include <iostream>
using namespace std;

//creating 2d array
int main(){
    int A[3][4]={{1,3,5,4},{3,5,4,6},{3,5,6,7}};

    int *B[3];
    int **C;
    int i,j;

    for(i=0;i<3;i++){
        for(j=0;j<4;j++)
        cout<<A[i][j]<<" ";
        cout<<"\n";
    }

    B[0]=(int*)malloc(4*sizeof(int));
    B[1]=(int*)malloc(4*sizeof(int));
    B[2]=(int*)malloc(4*sizeof(int));

    C[0]=(int*)malloc(4*sizeof(int));
    C[1]=(int*)malloc(4*sizeof(int));
    C[2]=(int*)malloc(4*sizeof(int));
    C[3]=(int*)malloc(4*sizeof(int));


    return 0;

}