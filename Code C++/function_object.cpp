#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
//funtion object (functor) : function wrapped in a class 
//so that it available like an object  
    int arr[] = {6,4,5,33,8,7};
    sort(arr, arr+4);
    
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
        
    }
    sort(arr, arr+5,greater<int>());
    cout<<endl;
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}