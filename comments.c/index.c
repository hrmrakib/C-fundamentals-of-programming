#include <stdio.h>

/* Write a function to calculate two numbers
    1st parameter: n1,
    2nd parameter: n2
*/

int twoSum(int n1, int n2) {
    int sum = n1 + n2;
    return sum;
}

int main() {
    
    // Here print: Hello world!
    printf("Hello World!\n");
    
    printf("Sum of two numbers: %d", twoSum(12, 20)); // Call the twoSum function with 2 parameters

    return 0;
}