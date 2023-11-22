#include<iostream>
using namespace std;
int main(){
    int i,j,n,b;
    cout<<"No. of lines: "; cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i+3;j++)
        {
           if(i==0 && j!=3){
            cout<<" ";
            
           }
           else{
            cout<<"*";
           }
           else if(i==1 && j=i+2){
            cout<<" ";
           }
           cout<<"endl";
        }
        cout<<"\n";
        }
    }
