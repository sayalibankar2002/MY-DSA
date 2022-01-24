#include <iostream>
using namespace std;

//changing upper case to lower case and viceversa
//method 1
int main(){
    char s[]="WELCOME";
    int i;
    for(i=0;s[i]!='\0';i++){
        s[i]=s[i]+32;    //ascii code value for upper to lower case add 32
    }
    cout<<s<<endl;

    return 0;
}

//method 2
int main(){
    char s[]="WELCOME";
    int i;
    for(i=0;s[i]!='\0';i++){
        if(s[i]>=65 && s[i]<=90)
        s[i]=s[i]+32;
        else if(s[i]>=97 && s[i]<=122)
        s[i]=s[i]-32;

    }
    cout<<s<<endl;

    return 0;
}