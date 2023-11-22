#include<stdio.h>
void printarray(int* A,int n){
    for(int i=0;i<=n;i++){
        printf("%d\n",*(A+i))
    }

}
void Bubble_sort(int* A,int n){
    int temp;
    for(int i=0;i<n-1;i++){ //for loop for no.of passes
        for (int j = 0; i < n-1-i; j++)//for loop for no.of comparison and swapping
        {
           if(A[j]>A[j+1]){
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=A[j];
           }
        }       
    }
}
int main(){
   int arr[6]={63,82,58,10,1,64};

   printarray(arr,6);
   Bubble_sort(arr,6);
   printarray(arr,6);

    return 0;
}