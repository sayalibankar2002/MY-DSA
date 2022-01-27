#include <iostream>
using namespace std;

//recursion
void func(int n){
    if(n>0){
        //if we switch the order then output will be 1 2 3
        cout<<n<<endl;//here we are printing the function
        func(n-1);//here we are making recursive call to the function
    }
}
int main(){
    int x=3;
    func(x);
}
