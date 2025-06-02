#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
}*first;
void Display(struct Node *P ){
    while(P!=NULL){
        cout<<P->data<<" ";
        P=P->next;

    }
cout<<endl;}

void insert(int pos,int x){
   
        Node *P,*t;
         if(pos==0){
        t=new Node;
        t->data=x;
        t->next=first;
        first=t;

    }
    else if(pos>0){
        P=first;
        for(int i=0;i<pos-1 && P;i++){
            P=P->next;
        }
        if(P){
        t=new Node;
        t->data=x;
        t->next=P->next;
        P->next=t;
    }}
}
void create(int A[],int n){
    int i;
    struct Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
int main(){

    int A[]={3,5,7,10,15};
    create(A,5);
    Display(first);
   insert(4,6);
   insert(0,4);
    Display(first);
    return 0;
}
