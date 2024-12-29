#include <stdio.h>

int main() {
   int i = 1;
   // Odd number 
   while(i <= 100) {
       if(i % 2 != 0){
            printf("Even number: %d\n", i);
       }
       i++;
   }
   
   return 0;
}