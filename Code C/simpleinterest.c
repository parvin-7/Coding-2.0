#include<stdio.h>
int main(){
    int intial,time;
    float final,interest;
    float mul,div;

    printf("enter intial price: ");
    scanf("%d",&intial);
    printf("enter interest: ");
    scanf("%f",&interest);
    printf("enter  time: ");
    scanf("%d",&time);
mul=intial*interest*time;
div=mul/100;
printf("The simple interest will be:%f ",div);

return 0;


}