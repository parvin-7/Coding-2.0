#include<iostream>
using namespace std;
void bubble_sort(int* A,int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){          
            if(A[j]>A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                
            }
        }
    }
}
void printing_array(int* A,int size){
    for(int i=0;i<size;i++){
       
        cout<<A[i]<<endl;
    }
}
int main(){
    int arr[11]={7,5,9,2,1,55,99,135,27,52,61};
    int alreadysorted=0;
     //printing_array(arr,5);
     bubble_sort(arr,11); //Calling bubble sort function
     printing_array(arr,11); //printing the sorted array
}