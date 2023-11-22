#include<stdio.h>
int main()
{
    int a=5689;
    int *p=&a;
    printf("%d",sizeof(int));
    printf("\nAddress=%d, Value=%d",p,*p);

    char *p0=(char*)p;
    printf("\n%d\n",sizeof(char));
    printf("Address=%d,Value=%d",p0,*p0);

    return 0;
}