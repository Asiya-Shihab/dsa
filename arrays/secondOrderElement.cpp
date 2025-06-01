#include<iostream>
#include<climits>
using namespace std;
int secondlargest(int A[],int n){
int largest=A[0];
int slargest=-1;
for(int i=0;i<n;i++){
    if(A[i]>largest){
        slargest=largest;
        largest=A[i];
    }
    else if(A[i]<largest && A[i]>slargest){
slargest=A[i];

    }
}

return slargest;
}

int secondsmallest(int A[],int n){
    int smallest=A[0];
    int ssmallest=INT_MAX;
    for(int i =0;i<n;i++){
        if(A[i]<smallest){
            ssmallest=smallest;
            smallest=A[i];
        }
        else if(A[i]>smallest && A[i]<ssmallest)
        ssmallest=A[i];
    }
    return ssmallest;
}
int main(){
    int A[]={2,3,4,5,8,32,98,12,9,3,1,4,43,80};
    cout<<"second largest element is "<<secondlargest(A,14)<<endl;
    cout<<"second smallest element is "<<secondsmallest(A,14);
}
