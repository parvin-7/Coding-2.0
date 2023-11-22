#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    int count =1;
    cin>>n;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<" ";
            cout<<count;
            count++;
            j++;
        
        }
        cout<<endl;
        i++;

    }
}