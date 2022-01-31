#include<iostream>
using namespace std;

//display circular linked list
struct node{
    int data;
    struct node *next;
}*Head;


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

void display(stuct node *h){
    do{
        cout<<h->data;
        h=h->next;

    }while(h!=Head);

    cout<<"\n";

}

void Rdisplay(struct node *h){
    static int flag=0;
    if(h!=Head || fag==0){
        flag=1;
        cout<<h->data;
        Rdisplay(h->next)
    }
    flag=0;
}
int length*(struct npode *p){
    int len=0;
    do{
        len++;
        p=p->next;
    }while(p!=Head);
    return len;    
    
}
void insert(struct node *p,int index ,int x){
    struct node *t;
    int i;
    if(index<0 || index>length(p))
        return 0;
    if(index==0){
        t=(struct node *)malloc(sizeof*(struct node));
        t->data=x;
        if(Head==NULL){
            Head=t;
            Head->next=Head;
        }
        else{
            while(p->next!=Head)
            p=p->next;
            p->next=t;
            t->next=Head;
            head=t;
        }
    }
    else{
        for(int i=0;i<index-1;i++)
        p=p->next;
        t=(struct node *)malloc(sizeof*(struct node));
        t->data=x;
        t->next=p->next;
        p->next=t;
    }

}

int delete(struct node *p,int index){
    struct node *p;
    int i,x;
    if(index <0 || index>length(Head))
        return -1;
    if(index==1){
        while(p->next!=Head)
        p=p->next;
        x=Head->data;
        if(Head==p){
            free(Head);
            Head=NULL;
        }
        else{
            p->next=Head->next;
            free(Head);
            Head=p->next;
        }
    }
    else{
        for(int i=o;i<index-2;i++)
        p=p->next;
        q=p->next;
        p->next=q->next;
        x=q->data;
        free(q);
    }
    return x;
}

int main(){
    int A[]={4,6,8,9,11};
    create(A,5);

    delete(Head,2);
    Rdisplay(Head);

    return 0;
}