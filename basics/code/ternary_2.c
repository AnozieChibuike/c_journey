#include <stdio.h>

int main() {
 int num = 5;
 int result = !(num == 5) ? num * 2 : num + 2 ;
 printf("%d", result); 
 return 0;
}
