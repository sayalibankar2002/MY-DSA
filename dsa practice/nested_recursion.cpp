#include <iostream>
using namespace std;

//nested recursion
int func(int n){
    if(n>100)
    return n-10;//for n>100 it ois just reyutrning (n-10) otherwise it return nested function
    
    return func(func(n+11));
}
int main(){
    int a;
    a=func(95);
    cout<<a<<endl;
}