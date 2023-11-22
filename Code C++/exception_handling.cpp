#include<iostream>
using namespace std;

int main(){
    int age=25;

    try{

        if(age>=24){
            cout<<"You can drink";
        }
        else{
            throw(age);
        }
    }
        catch(int age){
        cout<<"Not eligible for drink";
        cout<<"Your age is: "<<age;
    }
    

    
    return 0;
}