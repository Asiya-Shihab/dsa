#include<iostream>
using namespace std;
struct stack{
    int Top;
    int size;
    int *S;
};
void push(stack *st,int x){


if(st->Top==st->size-1){
    cout<<"stack overflow ";
}
else {
    st->Top++;
    st->S[st->Top]=x;
    
}}
int pop(stack *st){
    int x=-1;
if(st->Top==-1)
cout<<"stack underflow ";

else {
    x=st->S[st->Top];
    st->Top--;
    
}
return x;



}
int peek(stack *st,int pos){
    int x=-1;
    if(st->Top-pos+1<0){
        cout<<"invalid position ";

    }
else 
x=st->S[st->Top-pos+1];
return x;
}
int main(){
    
    stack *st=new stack;
    int x;
    int pos;
    st->Top=-1;
    cout<<"enter the size of the stack ";
    cin>>st->size;
  int  n=st->size;
    st->S=new int[st->size];
    cout<<"enter the elements ";
   while(n){
    cin>>x;
    push(st,x);
    n--;     
    
   }
   cout<<"enter the position to peek ";
   cin>>pos;
cout<<peek(st,pos)<<endl;
   
   while(st->Top!=-1){
  cout<<pop(st)<<" ";
  
   }
   }
