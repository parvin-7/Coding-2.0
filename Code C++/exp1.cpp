#include<iostream>
using namespace std;
int is_multiple(int n1,int n2){
    return n1%n2==0;
}
int main(){
    int n1,n2;
    cout<<"enter value of first no.";
    cin>>n1;
    cout<<"enter value of second no.";
    cin>>n2;

    if(is_multiple(n1,n2)){
        cout<<"Yes";
    }
    else{
        cout<<"No";

    }
    return 0;
}