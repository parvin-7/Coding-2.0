#include<iostream>

using namespace std;
class movie{
    public:
    int budget;
    int earning;

    movie(char budget)
    {
        cout<<"this->"<<this<<endl;
       this-> budget=budget;
       // cout<<"Here we go";
    }
};

int main(){
    int budget;
    movie kgf(200);
    cout<<"Address of budget is "<<&budget<<endl;
 
    return 0;
}