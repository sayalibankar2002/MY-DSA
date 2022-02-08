#include <iostream>
using namespace std;

//Queue using linked list
struct node{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;
void enqueue(int x){
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    if(t==NULL)
        cout<<"Queue is full";
    else{
        t->data=x;
        t->next=NULL;
        if(front==NULL)
            front=rear=t;
        else{
            rear->next=t;
            rear=t;
        }
    }
}

int dequeue(){
    int x=-1;
    struct node *t;
    if(front==NULL)
        cout<<"Queue is Empty"<<endl;
    else{
        x=front->data;
        t=front;
        front=front->next;
        free(t);
    }
    return x;
}
void display(){
    struct node *p=front;
    while(p){
        cout<<p->data<<" ";
        p=p->next;

    }
    cout<<endl;
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
   
    display();
    cout<<dequeue();

    return 0;
}
