#include<iostream>
using namespace std;
int binary_search(int arr1[],int size,int key){
    int start = 0;
    int end = size-1;

    int mid = (start)+(end-start)/2;
    while(start<=end){

    if(arr1[mid]==key){
        return mid;
        
    }
    else if(key>arr1[mid]){
        start=mid+1;
    }
    else if(key<arr1[mid]){
        end=mid-1;

    }
   mid = (start)+(end-start)/2;
}
return -1;
}
int main(){

    int n;
    int arr1[6]={1,3,6,8,9,10};

    cout<<"Enter element to search: ";
    cin>>n;
   int element= binary_search(arr1,6,n);
   cout<<element;

}