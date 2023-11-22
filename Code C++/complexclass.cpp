#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<endl<<"Complex number is: "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    complex c1(4,5);
    c1.display();

    return 0;
}