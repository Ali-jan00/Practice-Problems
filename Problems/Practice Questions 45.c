#include <stdio.h>

int main() {
   int array[6] = {1, 2, 3, 4, 5, 6};
   int loop;

   for(loop = 0; loop < 6; loop++)
      printf("%d ", array[loop]);
      
   return 0;
}