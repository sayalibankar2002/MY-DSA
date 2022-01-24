#include <iostream>
using namespace std;

//when recursive function call it self more than one time then it is tree recursion
void func(int n){
    if(n>0){
        cout<<n<<endl;
        func(n-1);//calling more than one time
        func(n-1);

    }
}
int main(){
    func(3);

    return 0;

}