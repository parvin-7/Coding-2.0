#include<iostream>
using namespace std;

class A{
    public:
    int i,j;
    
    void display(){

        cout<<"value of i,j is: "<<i<<", "<<j<<" "<<"respectively"<<endl;
    }
};
class B: public A{
public:
    int i,j,k;
    B(int x,int y,int z){
        i=x;
        j=y;
        k=z;
    }
};

//driver code
int main(){
    A a;
    B b(2,3,4);
    a = b;
    a.display();
    
    return 0;
    
}