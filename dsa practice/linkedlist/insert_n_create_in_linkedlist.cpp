#include <iostream>
using namespace std;

//inser and create in linked list
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
void Insert(struct node *p,int index,int x){
    struct node *t;
    int i;
    

    if(index<0 || index>count(p))
       return;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=x;
    
    if(index==0){
        t->next=first;
        first=t;
    }
    else{
        for(i=0;i<index-1;i++)
            p=p->next;
        t->next=p->next;
        p->next=t;
        
    }
}
int main(){
    Insert(first,0,15); 
    Insert(first,0,8); 
    Insert(first,0,9); 
    Insert(first,1,10); 
    display(first);

    return 0;
}