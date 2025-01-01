/*
Step 1: Start
Step 2: Declare variables num1, num2, and sum
Step 3: Read values num1 and num2
Step 4: Add num1 and num2 and assign the result to sum.
Step 5: Display sum
Step 6: Stop
*/

#include <stdio.h>

int sumTwoNumbers (int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

int main() {
    
    printf("%d", sumTwoNumbers(10, 20));

    return 0;
}
