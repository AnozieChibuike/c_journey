#include <stdio.h>

int main() {
char str[20];
fgets(str, sizeof(str),stdin);
printf("%s",str);
str[0] = 'X';
printf("%s",str);
return 0;
}