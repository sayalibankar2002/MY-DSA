#include <iostream>
using namespace std;

//counting consonents and vowels in string

int main(){
    char s[]="How Are You";
    int i,vcount=0,ccount=0;
    //cout<<"Enter the string:"<<endl;
    gets(s);

    for(i=0;s[i]='\0';i++){

        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' ||
        s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            vcount++;
        }
        else if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
            ccount++;
        }
    }
    cout<<"Number of vowels:"<<vcount<<endl;
    cout<<"Number of Consonents:"<<ccount<<endl;
    getchar();

    return 0;
}

//to count the number of words
int main(){
    char s[]="How Are You";
    int i,word=1;
    for(i=0;s[i]!='\0';i++){
        if(s[i]==' ' && s[i-1]!=' ')
            word++;

    }
    cout<<word<<endl;
    
}


