#include <stdio.h>

int main() {
double salary;
scanf("%lf",&salary);
double* ptr = &salary;
printf("%lf",*ptr);
return 0;
}
