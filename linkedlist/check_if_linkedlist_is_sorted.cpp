#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//check if linked list is sorted
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

void SortedInsert(struct node *p,int x){
    struct node *t,*q=NULL;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=next;
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
int mmain(){
    int A[]={2,4,5,7,9};
    create(A,5);

    cout<<SortedInsert(first,6);
    display(first);

    return 0;
}