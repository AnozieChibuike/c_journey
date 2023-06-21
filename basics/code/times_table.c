#include <stdio.h>
int main(){
int num;
int count = 10;
printf("Input number: ");
scanf("%d", &num);
do{
int result = num * count;
printf("%d * %d = %d",num,count,result);
putchar('\n');
count--;
}while(count >= 0);
return (0);
}
