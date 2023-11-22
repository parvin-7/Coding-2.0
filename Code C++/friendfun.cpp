#include<iostream>
using namespace std;
class Distance{
    int meter;

    //friend function
    friend int yes(Distance input);
    public:
    Distance(){
         meter = 0;
    }
};
int yes(Distance input){
    input.meter+=5;
    return input.meter;
}
//Driver code
int main(){
    Distance D;
    cout<<"Distance is: "<<yes(D)<<endl;
    return 0;
}