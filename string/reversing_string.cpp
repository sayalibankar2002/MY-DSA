#include <iostream>
using namespace std;

//method 1:reverse copying one sring into another
/*int main(){
    char A[]="python";
    char B[7];
    int i,j;
    for(i=0;A[i]!='\0';i++){
    }
    i=i-1;
    for(j=0;i>=0;i--,j++){
        B[j]=A[i];
    }
    B[j]='\0';
    cout<<B<<endl;

}*/

//method 2: reverse string by swaping
int main(){
    char A[]="abcd";
    char t;
    int i,j;
    for(i=0;A[j]!='\0';j++){
    }
    j=j-1;
    for(j=0;i<j;i++,j++){
        t=A[i];
        A[i]=A[j];
        A[j]=t;
    }
    cout<<A<<endl;

}