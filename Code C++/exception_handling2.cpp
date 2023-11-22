#include<iostream>
#include<exception>
using namespace std;
class Custom:public exception{
    public:
    virtual const char* what() const throw(){
       
        return "Divide by zero exception";
    }
};
int main(){
    
    try{
        int a=20,b=0;

        if(b==0){
            Custom e;

            throw e;
        }

        cout<<"Divison is: "<<a/b;
    }
    catch(Custom &e){
        cout<<"Exception caught here !"<<endl<<e.what();
    }
    return 0;
}