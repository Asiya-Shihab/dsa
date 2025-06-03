#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
}*first=NULL;
int Delete(int pos){
Node * p=first;
Node *q=NULL;
int x;
if(pos==1){
    x=first->data;
    first=first->next;
    delete p;
    
}
else {

    for(int i=0;i<pos-1&&p;i++){
        q=p;
        p=p->next;
        
    }
    if(p){
    x=p->data;
    q->next=p->next;
    delete p;
}}
return x;
}
void insert(int x,int pos){
    Node *t,*p;
    if(pos==0)
{   t=new Node;
    t->data=x;
    t->next=first;
    first=t;
}   
else{
    p=first;
    for(int i=0;i<pos-1&&p;i++){
        p=p->next;
        
    }
    if(p){
        t=new Node;
        t->data=x;
        t->next=p->next;
        p->next=t;
    }
}
}
void display(Node *P){
    while(P){
        cout<<P->data<<" ";
        P=P->next;
    }
    cout<<endl;
}
int main(){
    insert(2,0);
    insert(3,1);
    insert(1,2);
    insert(4,3);
    insert(6,4);
    insert(8,0);
    display(first);
    Delete(5);
    display(first);
}
