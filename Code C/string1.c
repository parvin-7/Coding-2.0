#include<stdio.h>
void printStr(char name[]){
    int i=0;
    while(name[i]!='\0')
    {
        printf("%c",name[i]);
        i++;
    }
}
int main(){
   // char name[]={'p','a','r','v','i','n','d','a','r','\0'};
   char name[50];
   gets(name);
   printf("Using custom function:\n");
    printStr(name);
    printf("\nUsing puts:\n");
  
    printf("Using printf function:\n%s",name);
    return 0;
}