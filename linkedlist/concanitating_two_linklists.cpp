#include <iostream>
using namespace std;

//concanitating two linklist
struct node{
    int data;
    struct node *next;
}*first=NULL,*second=NULL,*third=NULL;

void Display(struct Node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
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

void create2(int A[],int n){
    int i;
    struct node *t,*last;
    second=(struct node *)malloc(sizeof(struct node));
    second->data=A[0];
    second->next=NULL;
    last=second;

    for(i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void merge(struct node *p,struct  node *q)
{
    struct node *last
    if(p->data <q->data){
        third=last=p;
        p=p->next;
        third->next=NUll;
    }
    else{
        third=last=q;
        q=q->next;
        third->next=NULL;

    }
    while(p && q){
        if(p->data < q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;

        }
    }
    if(p)
    last->next=p;
    if(q)
    last->next=q;
}

int main(){
    int A[]={3,5,7,9,11};
    int B[]={4,6,13,12,18};

    create(A,5);
    create(B,5);

    merge(first,second);
    Display(third);

    return 0;
}

