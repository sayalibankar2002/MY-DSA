#include<iostream>
using namespace std;

//sum of n natural number using recursive function
int sum(int n){
    if(n==0)
    return 0;
    else
    return sum(n-1)+n;

}
int main(){
    int a;
    a=sum(5);
    cout<<a<<endl;
}

//itrative recursive function
int Isum(int n){
    int s=0;
    int i;
    for(int i=1;i<=n;i++){
        s=s+i;
    }
    return s;
}
