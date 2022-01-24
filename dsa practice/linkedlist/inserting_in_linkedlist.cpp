#include <iostream>
using namespace std;

//inserting in linkedlist
struct node{
    int data;
    struct node *next;
}*first=NULL;
void display(struct node *p){
    while(p!=NULL)
    cout<<p->data;
    p=p->next;
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

int count(struct node *p)
{
    int c=0;
    while(p!=0){
        c++;
        p=p->next;
    }
    return c;
}

void insert(struct node *p,int index,int x){
    int i;
    struct node *t;
    if(index <0 || index>count(p))
        return;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=x;

    if(index==0){
        t->next=first;
        first=t;
    }
    else{
        for(int i=0;i<index-1;i++){
            p=p->next;
            t->next=p->next;
            p->next=t;
        }
    }
}
int main(){
    int A[]={3,5,7,9,13,15};
    create(A,6);

    display(first);
    return 0;
}