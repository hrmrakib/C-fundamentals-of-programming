/*
 * Dynamic Memory Allocation:
 * Pointers are essential for dynamic memory management using functions like malloc, calloc, and free from <stdlib.h>.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    
    ptr = (int *)malloc(sizeof(int));
    
    if(ptr == NULL) {
        printf("Memory allocate failed!\n");
        return 1;
    }
    *ptr = 55;
    
    printf("%d\n", *ptr); // print the value
    printf("%d\n", ptr); // print the memory address
    free(ptr);  // Freeing allocated memory
    
    printf("Now memory is: %d\n", ptr); // Again print the memory address
    
    return 0;
}