#include<iostream>
using namespace std;
int removeduplicate(int* A,int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(A[i]!=A[j]){
            A[i+1]=A[j];
            i++;
        }
    }
    return i;
}
int main(){
    int A[]={1,1,1,2,3,4,4,5,5,6,6,7,8,9,10};
   int lastIndex= removeduplicate(A,15);
   for(int j=0;j<=lastIndex;j++){
    cout<<A[j]<<" ";
   }
}
