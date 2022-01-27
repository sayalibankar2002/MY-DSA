#include <iostream>
using namespace std;

//Searching in Linked list;
struct node{
    int data;
    struct node *next;
}*first=NULL;

void create(int A[],int n){
    int i;
    struct node *t,*last;
    first=(struct node*)malloc(sizeof(struct node));
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

struct node *Lsearch(struct node *p,int key){
    struct node *q;
    while(p!=NULL){
        if(key==p->data){
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}

//recursive method
struct node *Rsearch(struct node *p,int key){
    if(p==NULL)
        return NULL;
    if(key==p->data)
        return p;
    return Rsearch(p->next,key);
}

int main(){
    struct node *temp;
    int A[]={3,5,7,9,13,35};
    create(A,6);

    temp=Rsearch(first,6);
    printf("%d",temp->data);

    return 0;
}