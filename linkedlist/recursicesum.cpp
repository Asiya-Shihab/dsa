#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
}*first;

int rsum(struct Node *P){
   if(P==0)
   return 0;
   else return rsum(P->next)+P->data;
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
   cout<< rsum(first);
    return 0;
}
