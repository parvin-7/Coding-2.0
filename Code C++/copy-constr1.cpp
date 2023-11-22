#include<iostream>
using namespace std;

class A{
    int a,b;
    public:
    A(int x,int y){
        a=x;
       b=y;
    }
    A(A &ref){
        a=ref.a;
        b=ref.b;
    }
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
int main(){
    A obj1(2,4);
    obj1.display();
    A obj2 = obj1;
    obj1.display();
    return 0;
}