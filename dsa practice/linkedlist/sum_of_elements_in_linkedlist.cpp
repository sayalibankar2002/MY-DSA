#include<iostream>
using namespace std;

//sum of elements in linkedlist
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
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
//iterative version
int sum(struct node *p){
    int sum=0;
    while(p)
    {
        sum=sum + p->data;
        p=p->next;
    }
    return sum;
}

//recursive version
int Add(struct node *p){
    if(p==0)
    return 0;
    else
    return Add(p->next)+p->data;
}
int main(){
    int A[]={3,5,7,9,23,45};
    create(A,6);

    cout<<Add(first);

    return 0;
}