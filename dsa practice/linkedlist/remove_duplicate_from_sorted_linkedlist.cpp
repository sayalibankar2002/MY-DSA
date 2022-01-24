#include <iostream>
using namespace std;

//remove duplicates from sorted linked list
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

void RemoveDuplicate(struct node *p){
    struct  node *q=p->next;
    while (q!=NULL)
    {
        if(p->data!=q->data){
            q=p;
            q=p->data;

        }
        else{
            p->next=q->next;
            free(q);
            q=p->next;
        }
    }
    
}

int main(){
    int A[]={3,5,7,8,9,11};
    create(A,6);

    RemoveDuplicate(first);
    display(first);

    return 0;
}