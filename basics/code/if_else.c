#include <stdio.h>
#include <stdbool.h>

int main(){
 printf("Voting exercise!");

 int age;

 printf("Enter your age: ");
 scanf("%d", &age);

 if (age >= 18) {
   printf("You are eligible to vote!");
} else{
   printf("Sorry you are too young to vote!");
}
 return 0;
}
