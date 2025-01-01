/*
Step 1: Start
Step 2: Declare variables a, b, and c
Step 3: Check: 
                if (a > b) {
                    else if (a > c) {
                        a is the largest

                        else {
                            c is the largest
                        }
                    } 
                } else {
                    if (b > c) {
                        b is largest
                    } else {
                        c is largest
                    }
                }
Step 4: Display the largest
Step 5: Stop
*/

#include <stdio.h>

int largest (int a, int b, int c) {
    if (a > b) {
        if (a > c) {
            printf("%d", a);
        } 
        else {
            printf("%d", c);
        }
    } 
    else {
        if (b > c) {
            printf("%d", b);
        } else {
            printf("%d", c);
        }
    }
}

int main() {
    
    largest(10, 20, 38);

    return 0;
}
