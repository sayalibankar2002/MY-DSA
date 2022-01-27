#include <iostream>
using namespace std;

//Maximum element in linkedlist
struct node
{
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
//iterative version
int Max(struct node *p){
    int max=-34567,INT_MIN;
    while(p){
        if(p->data > max)
                max=p->data;
        p=p->next;
    }
    return max;
}

//recursive version
int Rmax(struct node *p){
    int x=0;
    if(p==0)
       return INT32_MAX;

    else
        x=Rmax(p->next);
        if(x>p->data)
        return x;
        else
        return p->data;
}

int main(){
    int A[]={3,5,7,10,13,27};
    create(A,8);

    cout<<Rmax(first);

    return 0;
}