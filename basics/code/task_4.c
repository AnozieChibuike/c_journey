#include <stdio.h>
int main()
{
while(1)
{
int num;
printf("Input Number: ");
scanf("%d", &num);
if (num < 0 && (num % 2 != 0))
{
printf("%d",num);
continue;
} else if (num > 0)
{
printf("Positive Value");
break;
}else if (num < 0 && (num % 2 == 0))
{
printf("Negative Even");
continue;
}
}
return (0);
}
