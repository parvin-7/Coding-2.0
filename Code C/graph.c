#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,gdistance;
    printf("Enter required values:\n");
    scanf("%f\t%f\t%f\t%f",&x1,&y1,&x2,&y2);

    gdistance=((x2-x1))*((x2-x1))+((y2-y1))*((y2-y1));
    printf("=>%f",gdistance);
    return 0;
}