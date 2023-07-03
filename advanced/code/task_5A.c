#include <stdio.h>

int main() {
   int arr[] = {36, 43, 2, 73, 6};
   int largest = *arr;
   int i = 0;
   while(i < (sizeof(arr)/4)){
      if (largest < *(arr + i)) {
         largest = *(arr + i);
	}
	i++;
	}
	printf("%d",largest);
   return 0;
}
