#include <stdio.h>
#include <string.h>

int main(){
char str1[20];
char str2[20];
fgets(str1, sizeof(str1), stdin);
fgets(str2, sizeof(str2), stdin);

if (strlen(str1) > strlen(str2)){
printf("%s",str1);
} else {
printf("%s", str2);
}

return 0;
}

