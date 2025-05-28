#include<iostream>
using namespace std;
class Lower{
    private:
    int n;
    int *A;
    public:
    Lower(){
        n=2;
        A=new int[2];
    }
    Lower(int n){
        this->n=n;
        A=new int[n];
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
    ~Lower(){
        delete []A;
    }


};
void Lower::set(int i,int j,int x){
        if(i>=j)
    A[(i*(i-1)/2)+(j-1)]=x;

    }
int Lower::get(int i,int j){
    if(i>=j)
    return A[(i*(i-1)/2 )+(j-1)];
    return 0;
}
void Lower::display(){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            if(i>=j)
        cout<<get(i,j)<<" ";
        else cout<<"0 ";

        }
        cout<<endl;
    }
}
    int main(){
int n,x;
cout<<"enter the dimension ";
cin>>n;
        Lower triangle(n);
    cout<<"enter all the elements ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>x;
            triangle.set(i,j,x);
        }
    }

    triangle.display();

    }
