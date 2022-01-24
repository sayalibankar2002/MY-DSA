#include <iostream>
using namespace std;
//factorial using recursion
int func(int n){
    if(n==0)
    return 1;
    return func(n-1)*n;
}
//iterative factorial function
int Ifunc(int n){
    int f=1;//intializing variable for factorial
    int i;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
}
int main(){
    int a;
    a=func(5);
    cout<<a<<endl;
}