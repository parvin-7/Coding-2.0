#include<iostream>
using namespace std;

template <class t1=int, class t2=float>
class myclass{
    public:
    t1 a;
    t2 b;

    myclass(t1 e,t2 y){
        a = e;
        b = y;
    }
    void display(){
        cout<<this->a<<endl<<this->b<<endl;
    }
};
int main(){
    myclass <>m1(4,1.3);
    m1.display();

    return 0;
}