#include <iostream>
using namespace std;

//display linked list
struct node{
    int data;
    struct node *next;
}*first=NULL;


void display(struct node *p )
{
    if(p!=NULL){
        display(p->next);
        cout<<p->data;
    }
};

int main(){
    struct node *temp;
    int A[]={3,5,6,34,57};

    display(first);

    return 0;
}
