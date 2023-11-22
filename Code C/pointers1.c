#define S 5
#include<stdio.h>
int main()
{
int arr[S],i;
int*ptr=arr;
printf("Enter %d elements of array\n",S);
for(i=0;i<S;i++)
scanf("%d",&arr[i]);
printf("Array elements \n");
printf("using four different notations\n");
for(i=0;i<S;i++)
printf("%d \n",*(ptr+i));
return 0;
}
