#include<iostream>
using namespace std;
template <class t>
class myclass{
    public:
    t data;

    myclass(t e){
        data = e;
    }
    void display();
        
};
template <class t>
void myclass<t>:: display(){
    cout<<this->data<<endl;
}
void function(int x){
    cout<<"hello world 1:"<<x<<endl;
}
template <class t>
void function(t x){
    cout<<"hello world 2"<<x<<endl;
}
template <class t>
void function1(t x){
    cout<<"hello world 3:"<<x<<endl;
}
int main(){
    myclass <int>m1(3);
    cout<<m1.data;
    cout<<endl;
    m1.display();
    
    function(6);//exact match takes the highest priority
    function1(7);
    return 0;
}