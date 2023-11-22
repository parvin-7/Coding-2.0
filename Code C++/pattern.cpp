#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    cout<<"Enter no. of lines: "<<endl;
    cin>>n;
    while(i<=n){
        int j = 1;
        while(i>=j){ //Also while(j<=n)
            cout<<j;
            j++;
        }
        cout<<"\n";
        i++;
    }
    return 0;
}