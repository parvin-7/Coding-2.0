#include<iostream>
using namespace std;
int main(){
    int n,i;
    bool number=1;
    cout<<"enter no. to check: "<<endl;
    cin>>n;

    for(i=2;i<n;i++){
        if(n%i==0){
        number=0;
        break;
        }
    }
        if(number==0){
            cout<<"It is not a prime";
        }
        else{
            cout<<"It is a prime no.";
        }
    
    return 0;
}