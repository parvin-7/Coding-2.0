#include<iostream>
using namespace std;
int binary_searchrotatedsorted(int arr[],int size,int key){
    int start=0;
    int end=size -1;
    int i=0;

    int mid=start+(end-start)/2;
    //finding sorted part in array
     
    while(i!=mid){
        if(arr[i+1]>arr[i])
        {
            i++;
            break;
        }
        else{
            cout<<"Left part is not sorted"<<endl;
            
            break;
        }
        cout<<"Left part is sorted"<<endl;
 while(start<=end){

    if(arr[mid]==key){
        return mid;
        
    }
    else if(key>arr[mid]){
        start=mid+1;
    }
    else if(key<arr[mid]){
        end=mid-1;

    }
   mid = (start)+(end-start)/2;
}     
    }
    /* 
    i=mid+1;
    while(i!=size-1){
        if(arr[i+1]>arr[i])
        {
            i++;
            break;
        }
        else{
            cout<<"right part is not sorted"<<endl;
            return 1;
            break;
        }
        cout<<"right part is sorted"<<endl;
        return 0;
    }
    }*/
}
int main(){
    int key,arr[6]={5,6,7,8,1,2};
    cin>>key;
  //int index = binary_searchrotatedsorted(arr,7,key);

  cout<<"Entered "<<key<<" element have "<<binary_searchrotatedsorted(arr,6,key)<<" index in array ";
}