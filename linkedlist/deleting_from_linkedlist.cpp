#include <iostream>
using namespace std;

//Deleting from linked list
struct node{
    int data;
    struct node *next;
}*first=NULL;

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
int count(struct node *t)
{
    int c=0;
    while(t!=0){
        c++;
        t=t->next;
    }
    return c;
}

void display(struct node *p){
    while(p!=NULL)
    cout<<p->data;
    p=p->next;
}

void delete(struct node *p,int index){
    struct node *q=NULL;
    int x=-1,i;
    if(index<1 || index>count(p))
        return -1;
    if(index==1){
        q=first;
        x=first->data;
        first=first->next;
        free(q);
        return x;
    }
    else{
        for(i=0;i<index-1;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        free(p);
        return x
    }

}
int main(){
    int A[]={3,5,7,45,50};
    create(A,5);

    cout<<delete(first,0);
    display(first);

    return 0;
}