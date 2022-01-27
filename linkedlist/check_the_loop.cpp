#include <iostream>
using namespace std;

//check for loop in linked list
struct node{
    int data;
    struct node *next;
}*first=NULL,*second=NULL,*third=NULL;

void Display(struct Node *p)
{
 while(p!=NULL)
 {
 cout<<p->data;
 p=p->next;
 }
}

void create(int A[],int n){
    int i;
    struct node *t,*last;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int isLoop(struct node *f){
    struct  node *p,*q;
    p=q=f;
    do{
        p=p->next;
        q=q->next;
        q=q?q->next:q;

    }while(p && q && p!=q);

    if (p==q)
        return 1;
    else
        return 0;
}

int main(){
    struct  node *t1,*t2;
    int A[]={3,5,7,8,9};
    create(A,5);

    t1=first->next->next;
    t2=first->next->next->next->next;
    t2->next=t1;

    cout<<isLoop(first);

    return 0;
}
