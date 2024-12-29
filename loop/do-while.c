#include <stdio.h>

int main() {
   int i = 0;
   
   do {
       printf("The value of i: %d\n", i);
       printf("I am abnormal and rare usecase.");
       i++;
   }
   
   while(i >= 100);
   
   return 0;
}