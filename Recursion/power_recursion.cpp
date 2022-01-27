#include <iostream>
using namespace std;
//power function using recursion 
int pow(int m,int n){
    if(n==0)
    return 1;
    return pow(m,n-1)*m;
}
//iterative call
int Ipow(int m,int n){
    if(n==0)
    return 1;
    if(n%2==0)//if n is even
    return pow(m*m,n/2);
    else
    return pow(m*m,(n-1)/2);
}
int main(){
    int a=pow(2,9);
    
    cout<<a<<endl;

    return 0;
}