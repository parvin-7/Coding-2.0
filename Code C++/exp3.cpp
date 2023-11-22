#include<iostream>
using namespace std;
int main(){
    int q,num,result=0,remainder;
    cout<<"Enter your number: ";
    cin>>num;

    

    while(q!=0){
        q=num;
        remainder=num%10;
        result=result*10+remainder;
        q=q/10;
    }    
    if(result==num){
        cout<<"It is a palindrome";
    }
    else
    {
        cout<<"No!";
    }
    return 0;
    }