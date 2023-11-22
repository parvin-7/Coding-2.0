#include<iostream>
using namespace std;
int Firstoccurance(int arr[],int size,int k){
    int s=0;
    int e=size-1;
    int ans=-1;

    int mid=(s)+(e-s)/2;

    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(k>arr[mid]){
            s=mid+1;
        }
        else if(k<arr[mid]){
            e=mid-1;
        }
        mid=(s)+(e-s)/2;
    }
    return ans;

}
int Lastoccurance(int arr[],int size,int k){
    int s=0;
    int e=size-1;
    int ans=-1;

    int mid=(s)+(e-s)/2;

    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(k>arr[mid]){
            s=mid+1;
        }
        else if(k<arr[mid]){
            e=mid-1;
        }
        mid=(s)+(e-s)/2;
    }
    return ans;

}
int main(){
    int k,arr[20]={2,2,9,2,9,7,3};
    cout<<"Enter key element: ";
    cin>>k; 
    cout<<"Entered key element have "<<Firstoccurance(arr,7,k)<<" postion"<<endl;
    cout<<"Entered key element have "<<Lastoccurance(arr,7,k)<<" postion"<<endl;
    
    return 0;
}