#include<iostream>
using namespace std;
struct Node{
int data;
 Node* next;

}*first=NULL,*last=NULL;

void insertLast(int x){
    Node* t=new Node;
    t->data=x;
    t->next=NULL;
    if(first==NULL){
        first=last=t;

    }
    else {
        last->next=t;
        last=t;
    }
}
void display(Node * P){
    while(P){
     cout<<P->data<<" ";
     P=P->next;
    }

}
int main(){
   
    insertLast(5);
    insertLast(6);
    display(first);
}
