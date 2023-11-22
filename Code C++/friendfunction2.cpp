#include<iostream>
using namespace std;
class super_dupercar;
class super_car{
    private:
    int supra;

    public:
    supercar(){
        supra=5;
    } 
    friend long long int Theyarefire(super_car s,super_dupercar d);
};
class super_dupercar{
    private:
    int omni;

    public:
    super_dupercar(){
        omni=1;
    }
    friend long long int Theyarefire(super_car s,super_dupercar d);
};
long long int Theyarefire(super_car s,super_dupercar d){
    //s.supra;
    //d.omni;

    return s.supra;
    cout<<endl;
    return d.omni;
    
}
//Driver code

int main(){
    super_car s;
    super_dupercar d;
    cout<<"Supercar is:"<<Theyarefire(s,d)<<endl;
    return 0;

}