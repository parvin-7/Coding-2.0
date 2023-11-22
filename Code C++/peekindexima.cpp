#include<iostream>
using namespace std;
int binary_search(int arr1[],int size){
    int start = 0;
    int end = size-1;

    int mid = (start)+(end-start)/2;
    while(start<end){
    if(arr1[mid]>=arr1[0]){
        start=mid+1;
    }
    else {
        end=mid;
    }
   mid = (start)+(end-start)/2;
}
return start;
}
int main(){

    int n;
    int arr1[6]={5,6,7,2,4,8};
   int element = binary_search(arr1,6);
   cout<<element;
   return 0;

}