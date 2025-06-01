#include<iostream>
using namespace std;
bool issorted(int A[],int n){
    for(int i=1;i<n;i++){
        if(A[i]<A[i-1])
        return false;
    }
    return true;

}
int main(){
    int A[]={1,2,3,4,4,4,5,6,7};
    cout<<((issorted(A,9))?"array is sorted":"array is not sorted ")<<endl;
}
