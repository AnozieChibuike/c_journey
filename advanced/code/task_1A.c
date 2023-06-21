
#include <stdio.h>
#include "main.h"
int main(){
int result = multiply(5,6);
printf("Result = %d\n", result);
return 0;
}

int multiply (int num1, int num2)
{
int result = num1 * num2;
return result;
}
