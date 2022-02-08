#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//implementation of stack using linked list
struct node{
    int data;
    struct node *next;

}*top=NULL;

void push(int x){
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    if(t==NULL)
    cout<<"stack is full"<<endl;
    else
    t->data=x;
    t->next=top;
    top=t;

}

int pop(){
    struct node *t;
    int x=-1;

    if(top==NULL)
    cout<<"stack is empty";
    else{
    t=top;
    top=top->next;
    x=t->data;
    free(t);
    }
    return x;
}

void display(){
    struct node *p;
    p=top;
    while(p!=NULL){
        cout<<p->data<<"\n";
        p=p->next;
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);

    display();
    cout<<pop();

    return 0;
}