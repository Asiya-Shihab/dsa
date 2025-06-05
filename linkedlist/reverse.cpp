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

}
