#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
}*first;

int max(struct Node*P){
    int m=P->data;
    while(P){
      
        if(m<P->data){
            m=P->data;
        }  P=P-> next;

    }
    return m;
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

    int A[]={3,5,17,10,15};
    create(A,5);
   cout<< max(first);
    return 0;
}
