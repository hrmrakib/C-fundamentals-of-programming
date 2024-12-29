#include <stdio.h>
#include <stdbool.h>

int main() {
   int x = 12;
   int y = 16;
   
   printf("%d is less than %d %d\n", x, y, x < y);
   printf("%d is greater than %d %d\n", y, x, y > x);

   return 0;
}