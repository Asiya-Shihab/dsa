#include<iostream>
using namespace std;
struct Node {
    int data;
    Node * next;
}*top=NULL;
void push(int x){
    Node * t=new Node;
    if(t==NULL)
    cout<<"stack overflow ";
    else{ 
    t->data=x;
    t->next=top;
    top=t;
}}
int pop(){
    Node * p;
    int x=-1;
    if(top==NULL){
        cout<<"stack is empty ";

    }
    else{
        p=top;
        
        top=top->next;
        x=p->data;
        delete []p;
        p=NULL;
        
        
    }
    return x;
}
int peek(int pos){
    Node * p=top;
    for(int i=0;p&&i<pos-1;i++){
        p=p->next;
    }
    if(p)
    return p->data;
    else 
    return -1;
}
void display(){
    Node * p=top;
    while(p){
        cout<<p->data<<" ";
        p=p->next;

    }
    cout<<endl;
}
int main(){
    push(3);
    push(2);
    push(1);
    push(4);
    push(5);
    display();
   cout<<"element at postion 2 is "<<peek(2)<<endl;
    pop();
    pop();
    pop();
    display();

}
