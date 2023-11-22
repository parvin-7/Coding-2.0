#include<iostream>
using namespace std;
class shallow
{
    int data1,data2;

    public:
    void setvalues(int a,int b){
        data1=a;
        data2=b;
    }
    void display(){
        cout<<endl<<"Value of data 1 is: "<<data1<<endl<<"Value of data 2 is: "<<data2;
    }
};
int main(){
    shallow s1;
    s1.setvalues(10,20);
    s1.display();
    //shallow copy
    shallow s2 = s1;
    s2.display();

    return 0;
}