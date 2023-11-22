#include<iostream>
using namespace std;
int count=0;
class Desturctor{
    

    public:
    Desturctor(){
        count++;
        cout<<"constructor called for object number"<<count<<endl;
    }
    ~Desturctor(){
        cout<<"Destructor called for object Number"<<count<<endl;
        count--;
    }
};
int main(){
    Desturctor d1,d2;

    return 0;
}