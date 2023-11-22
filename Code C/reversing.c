#include<stdio.h>
int main(){
    int n,digit,ans=0;
    scanf("%d",&n);
    int result=n;
    
   while(n!=0){

   int digit =n%10;
   ans=(ans*10) + digit;
    n=n/10;
   }
   

if(result==ans){
    printf("palindrome");
}
else{
    printf("no");
}
return 0;
}