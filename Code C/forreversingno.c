#include <stdio.h>

int main() {

  int n,m,reverse = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &n);
m=n;
  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  if(reverse==m)
  {
    printf("The no. is an palindrome ");
  }
else {
    printf("No");
}
  return 0;
}