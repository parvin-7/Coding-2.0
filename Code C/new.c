#include <stdio.h>
 int main(){
    int a[2][2],b[2][2],c[2][2];
    int i,j;
    printf("enter the elements of first matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
printf("elements of first matrix are:\n");
for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d  ",a[i][j]);
        }
    }

    printf("enter the elements of second matrix\n");
for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        scanf("%d",&b[i][j]);
        }
    }
    printf("elements of second matrix are\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d  ",b[i][j]);
        }
    }
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        c[i][j]=a[i][j]+b[i][j];

    }
  }
  printf("resultant matrix is :\n");
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d  ",c[i][j]);
    }
  }
    return 0;
 }