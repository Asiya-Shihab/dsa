#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
}*first=NULL;

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
void duplicate(Node *P){
    Node * q=first->next;
    while(q){
        if(P->data!=q->data){
            P=q;
            q=q->next;


        }
        else{
            P->next=q->next;
            delete q;
            q=P->next;

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
    insert(1,0);
    insert(2,1);
    insert(3,2);
    insert(3,3);
    insert(3,4);
    insert(4,5);
    duplicate(first);
    display(first);
    
}
