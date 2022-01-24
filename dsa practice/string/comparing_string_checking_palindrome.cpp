#include <iostream>
#include <cstring>
using namespace std;

//checking string 
/*int main(){
    char A[]="Pointer";
    char B[]="Painting";
    int i,j;
    for(i=0,j=0;A[i]!='\0' && B[j]!='\0';i++,j++){
        if(A[i]!=B[j]){
            break;
        }
        if(A[i]==B[j])
        cout<<"equal";
        else if(A[i]<B[j])
        cout<<"smaller";
        else
        cout<<"greater";
    }
}*/

//checking Palindrome
int main(){
    char string1[20];
    int i,length;
    int flag=0;

    cout<<"Enter the string:";
    cin>>string1;

    length=strlen(string1);

    for(i=0;i<length;i++){
        if(string1[i]!=string1[length-i-1]){
            flag=1;
            break;
        }
    }
    
    if(flag){
        cout<<"string1 is not Palindrome";
    }
    else 
        cout<<"string1 is Palindrome";

    return 0;
}