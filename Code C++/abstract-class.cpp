#include<iostream>
using namespace std;

class A{
    public:
    virtual void show() = 0;
    void disp(){
        cout<<endl;
        cout<<"This is abstract class";
        cout<<endl;
    }
};

class B:public A{
    public:
    void show(){
        cout<<endl;
        cout<<"This is derived class";
        cout<<endl;

    }
};

//driver code
int main(){
    B bobj;
    bobj.show();

    bobj.disp();
    return 0;
}