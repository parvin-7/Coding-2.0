#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    cin>>n;

    while(i<=n){
        int j=1;
        while(j<=n){
           
            cout<<n-j+1;
            j++;
        }
        cout<<"\n";
   i++;
    }

}