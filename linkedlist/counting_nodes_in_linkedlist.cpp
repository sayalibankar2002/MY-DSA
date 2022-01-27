#include <iostream>
using namespace std;

//counting nodes in linked list
struct node{
    int data;
    struct node *next;
}*first=NULL,*second=NULL,*third=NULL;

void display(struct node *p){
    if(p!=NULL)
    cout<<p->data;
    p=p->next;
}

void create(int A[],int n){
    int i;
    struct node *t,*last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=0;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
int count(struct node *t)
{
    int c=0;
    while(t!=0){
        c++;
        t=t->next;
    }
    return c;
}

int main(){
    int A[]={3,5,6,47,56,70};
    create(A,7);

    printf("Count %d\n",count(first));

    return 0;
}
    