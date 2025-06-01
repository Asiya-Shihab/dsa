#include<iostream>
using namespace std;
void rotate(int *A,int n,int d){{
    while(d){
    int temp=A[0];
    for(int i=1;i<n;i++){
        A[i-1]=A[i];

    }
    A[n-1]=temp;
    d--;
}}}
int main(){
    int A[]={2,4,3,2,4,2,1,4,5,6};
    int d;
    rotate(A,10,4);
      
    for(int i=0;i<10;i++)
    cout<<A[i]<<' ';
}
