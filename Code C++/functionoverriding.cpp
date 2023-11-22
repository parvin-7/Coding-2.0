#include<iostream>
using namespace std;
class base_class{
    public:
    void gfg(){
cout<<"This is function overriding\n";
    }
};
class derived_class: public base_class{
    public:
    void gfg(){
cout<<"This is function overriding\n";
    }
};
int main(){
    derived_class d;
    cout<<endl;
    d.gfg();
cout<<endl;
    return 0;
}
