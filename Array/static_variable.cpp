#include <iostream>
using namespace std;

//static and global variable in recursion
int func(int n){
    static int x;
    if(n>0){
        x++;
        return func(n-1)+x;
        return 0;
    }
}
int main(){
    int a;
    a=func(5);
    cout<<a<<endl;

    return 0;
}