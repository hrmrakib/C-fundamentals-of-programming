#include <stdio.h>

int main() {
    char txt[] = "Hello, Bangladesh!";
    
    char *pt = txt;
    
    printf("%p\n", pt);
    printf("%p\n", pt);
    printf("%p\n", pt);
    
    return 0;
}