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
void display(Node *P){
    while(P){
        cout<<P->data<<" ";
        P=P->next;
    }
    cout<<endl;
}
bool sorted(Node * P){
    
    int x=-32768;
    
    while(P){
        if(P->data<x)
        return false;
        x=P->data;;
        P=P->next;

    }
    return true;
}
int main(){
    insert(2,0);
    insert(3,1);
    insert(1,2);
    insert(4,3);
    insert(6,4);
    insert(8,0);
    display(first);
    
    cout <<(sorted(first)?"is sorted ":"is not sorted ")<<endl;
}
