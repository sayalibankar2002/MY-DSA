#include <iostream>
using namespace std;

//head recursion
void func(int n){
    if(n>0){
        func(n-1);//this is the head recursion function is get call first and then printing will be done
        cout<<n<<endl;
    }
}
int main(){
    int a=6;
    func(a);
}
//output of program is 1-6