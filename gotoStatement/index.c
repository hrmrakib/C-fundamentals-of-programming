#include <stdio.h>

int main() {
   const int maxInput = 100;
   int i;
   double number, average, sum = 0.0;
   
   for(i = 1; i <= maxInput; ++i) {
       printf("%d. Enter a number: \n", i);
       scanf("%lf", &number);
       
       if(number < 0.0) {
           printf("Ended.\n");
           goto journeyEnd;
       }
       
       sum += number;
   }
   
   journeyEnd: 
    average = sum / (i - 1);
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", average);
   
   

   return 0;
}