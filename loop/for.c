#include <stdio.h>

int main() {
   int i = 1;
   // Even number 
   
   for(i; i <= 100; i++) {
       if(i % 2 == 0){
            printf("Even number: %d\n", i);
       }
   }
   
   return 0;
}