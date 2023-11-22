#include<stdio.h>
struct student{
        int Roll;
        char name[100];
    };
int main(){
    
   
    struct student ss[5];
   /* struct student s1={10,"Parvindar singh"};
    struct student s2={42,"Shoheb akhtar"};
    printf("Roll no:%d\n",s1.Roll);
    printf("Name:%s\n",s1.name);
    printf("Roll no:%d\n",s2.Roll);
    printf("Name:%s\n",s2.name);
    */
    for(int i=0;i<5;i++){
         printf("Roll no for %d student: ",i+1);
         scanf("%d",ss[i].Roll);
         printf("Name for %d student: ",i+1);
         scanf("%d",ss[i].name);
    }
    /*printingstudent_details(ss);

    

 return 0;
}
void printingstudent_details(){
    printf("Students details:\n");
    for(int i=0;i<5;i++){
        printf("Roll no.\tName\n");
        printf("%d\t%s",ss[i].Roll,ss[i].name);
    }
}*/
return 0;
}