#include <stdio.h>
#include <stdbool.h>

int main(){
  double num;

  printf("Enter Number: ");
  scanf("%lf", &num);

  if (num > 0) {
    printf("The number is positive");
  } else if (num < 0) {
    printf("The number is negative");
  } else if (num == 0)  {
    printf("The number is zero");
  } else {
    printf("NaN");
  }
  return 0;
}
