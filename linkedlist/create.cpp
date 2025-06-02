#include<iostream>
using namespace std;
struct Node{
int data;
 Node* next;

}*first=NULL;
void insert(int pos,int x){
    Node* t,*q=first;
     t=new Node;
        t->data=x;
    if(pos==0){
       
        t->next=first;
        first=t;
    }
    else if(pos>0){
    for(int i=0;i<pos-1;i++){
        q=q->next;

    }
    t->next=q->next;
    q->next=t;

    }

}
void display(Node * P){
    while(P){
     cout<<P->data<<" ";
     P=P->next;
    }

}
int main(){
    insert(0,1);
    insert(1,2);
    insert(2,3);
    display(first);
}
