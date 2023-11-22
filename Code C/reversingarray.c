#include<stdio.h>
void reverse(int arr1[],int arr2[],int n){
    int start = 0;
    int end = n-1;
    while(start!=n){
    arr2[start]=arr1[end];
    end--;
    start++;
    }
    printf("Going to print the reversed array\n");
}
int main(){
    int arr1[5],arr2[5],i;
    
    for(i=0;i<5;i++){
    printf("Enter array data no. %d: ",i);
    scanf("%d",&arr1[i]);
    }
    reverse(arr1,arr2,5);
    
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr2[i]);
        }
    return 0;
}