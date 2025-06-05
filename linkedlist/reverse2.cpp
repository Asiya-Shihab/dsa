#include<iostream>
using namespace std;
struct Node {
    int data;
    Node * next;
}*first =NULL;
void display(Node * P){
    while(P){
        cout<<P->data<<" ";
        P=P->next;
    }
    cout<<endl;
}

void reverse1(Node * P){
   Node * q=NULL;
   Node * r=NULL;
   while(P){
    r=q;
    q=P;
    P=P->next;
 q->next=r;
}
first =q;
}
void reverse(Node * P){
    int *A=new int[10];
    int i=0;
while(P)
{
        A[i]=P->data;
        P=P->next;
        i++;

    }
    i--;
    P=first;;
    while(P){
        P->data=A[i];
        i--;
        P=P->next;
    }
}
void reverse3(Node *q,Node *p){
    if(p){
        reverse3(p,p->next);
        p->next =q;
    }
    else
first=q;
}
void insert(int data,int pos){
    Node *P=first;
if(pos==0){

    Node *t=new Node;
    t->data=data;
    t->next=first;
    first=t;
}
else{
    for(int i=0;i<pos-1 && P;i++){
        P=P->next;
    }
    if(P){
    Node *t=new Node;
    t->data=data;
    t->next=P->next;
    P->next=t;

    }
}
}
int main(){
    insert(4,0);
    insert(5,1);
    insert(1,2);
    insert(3,3);
    display(first);
    reverse(first);
    display(first);
reverse1(first);
display(first);
Node * q=NULL;
reverse3(q,first);
display (first);
}
