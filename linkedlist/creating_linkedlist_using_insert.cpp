#include <iostream>
using namespace std;

//creating linkedlist using insert
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

void Sortedinsert(struct node *p,int x){
    struct node *t,*q=NULL;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=x;
    t->next=NULL;
    if(first==NULL)
        first=t;
    else{
        while(p && p->data<x){
            q=p;
            p=p->next;
        }
        if(p==first){
            t->next=first;
            first=t;
        }
        else{
            t->next=q->next;
            q->next=t;

        }
    }
}
int main(){
    int A[]={3,5,7,9,11,13};
    create(A,6);

    printf("%d\n",Sortedinsert(first,15));
    display(first);

    return 0;
}