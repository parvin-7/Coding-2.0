#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"No. of lines: "; cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
           
            cout<<" * ";
        }
        cout<<"\n";
    }
    return 0;
}