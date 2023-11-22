#include<stdio.h>
typedef struct class{
    char name[10];
    int chairs;
    int studentsno;
}class;
int main(){
    class B;
    printf("enter class name: ");
    gets(B.name);
    printf("enter chair no: ");
    scanf("%d",&B.chairs);
    printf("enter students total no.: ");
    scanf("%d",&B.studentsno);

    printf("Name=%s\n",B.name);
     printf("chairs no.=%d\n",B.chairs);
      printf("total no.of students=%d",B.studentsno);
return 0;
}