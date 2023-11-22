#include<iostream>
using namespace std;
int linear_search(int arr[],int size,int n){
  for(int i=0;i<size;i++){
    if(n==arr[i]){
        return i;
    }
  }
  return 0;
}
int main(){
    int arr[10]={1,4,7,-2,6,8,3};
    int n;
    cin>>n;
    
    bool found = linear_search(arr,10,n);
   if(found){
        //<<"  is present"<<endl;
        int location = linear_search(arr,10,n);
        cout<<"Entered Element is present at: "<<location<<endl;
    }  
    else{
        cout<<"Entered element is not present"<<endl;
    }
    
    return 0;
}