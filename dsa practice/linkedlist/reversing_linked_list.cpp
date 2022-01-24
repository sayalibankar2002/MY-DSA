#include <iostream>
using namespace std;

//Reversing linked list
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
int count(struct node *p)
{
    int c=0;
    while(p!=0){
        c++;
        p=p->next;
    }
    return c;
}
void reverse1(struct node *p){

    int *A,i=0;
    struct  node *q=p;
    A=(int *)malloc(sizeof(int)*count(p));

    while(q!=NULL){
        A[i]=q->data;
        q=q->data;
        i++;
    }
    q=p;
    i--;
    while (q!=NULL){
        q->data=A[i];
        q=q->next;
        i--;
    }
}
//reverse using sliding pointers
void reverse2(struct node *p) {
    struct node *q=NULL,*r=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

void reverse3(struct node *q,struct node *p)
{
    if(p){
        reverse3(p,p->next);
        p->next=q;

    }
    else 
        first=q;
}

int main(){
    int A[]={3,5,7,9,11};
    create(A,5);

    reverse2(first);
    display(first);

    return 0;
}
