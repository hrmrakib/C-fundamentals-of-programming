#include <stdio.h>

int main() {
   int x = 0;
   
   if(x % 2 == 0) {
       printf("%d is a Even number!", x);
   }else if(x % 2 != 0) {
       printf("%d is an Odd number!", x);
   }else{
       printf("%d is Zero!", x);
   }

   return 0;
}