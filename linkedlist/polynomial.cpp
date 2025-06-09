#include<iostream>
#include<cmath>
using namespace std;
struct Node{
    int coeff;
    int exp;
    Node* next;
}*first=NULL;
void insert(int x,int e){
    Node * P=first;
    Node * t=new Node;
    if(first==NULL){
    t->coeff=x;
    t->exp=e;
    t->next=NULL;
    first =t;}
    else {
        while(P->next){
            P=P->next;
        }
        P->next=t;
        t->coeff=x;
        t->exp=e;
        t->next=NULL;
        
    }
}
double eval(int x){
    double sum=0.0;
    Node * q=first;
    while(q){
        sum+=q->coeff* pow(x,q->exp);
        q=q->next;
    }
    return sum;
}
int main(){
    insert(4,3);
    insert(9,2);
    insert(6,1);
    insert(7,0);
   cout<< eval(2);



}
