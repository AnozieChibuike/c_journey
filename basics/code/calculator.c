#include <stdio.h>

int main(){
  char operator;
  double num1;
  double num2;
  double result;

  printf("Enter Operator ['+','-','*','/'] : ");
  scanf("%c", &operator);

  printf("\nEnter First Number : ");
  scanf("%lf", &num1);

  printf("\nEnter Second Number : ");
  scanf("%lf", &num2);

  switch(operator) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1/num2;
      break;
    default:
      printf("Not an Operator");
      result = 0;
      break;
}

  printf("%lf",result);
  return 0;
}
