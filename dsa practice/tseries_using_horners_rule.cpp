#include <iostream>
using namespace std;

//Taylor series using horners rule
//iterative version
double e(int x,int n){
    double s=1;
    double numerator=1;
    double denominator=1;
    for(int i=1;i<n;i++){
        numerator*=x;
        denominator*=i;
        s+=numerator/denominator;

    }
    return s;
}
//Recursive version
double Re(int x,int n){
    static double s;//here we have to return function at calling time that's why we are using static variable
    if(n==0)
        return s;
    s=1+x*s/n;

    return Re(x,n-1);
}
int main(){
    printf("%lf \n",Re(1,10));

    return 0;
}