#include <iostream>
using namespace std;

//tail recursion
void func(int n){
    if(n>0){
    
        cout<<n<<endl;
        func(n-1);//this is tail recursive call
    }
}
int main(){
    int a=7;
    func(a);
}
//output of this tail recursive function is 7-1 