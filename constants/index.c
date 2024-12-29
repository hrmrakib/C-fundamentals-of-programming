#include <stdio.h>

int main() {
   const int birthday = 2001;
   
   // birthday = 1998; // error: assignment of read-only variable 'birthday'
   
   printf("%d\n", birthday);
   

   return 0;
}