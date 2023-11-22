#include<iostream>
using namespace std;
template <class t1,class t2>
class myclass{
    public:
    t1 first;
    t2 second;

    myclass(t1 e,t2 y){
        first = e;
        second = y;
    }
    void display(){
        cout<<this->first<<endl<<this->second<<endl;
    }
};
int main(){

    myclass <int , char>obj(2,'d');
    obj.display();
}


