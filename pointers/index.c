#include <stdio.h>

int main() {
    int a;
    int *p;
    p = &a;
    
    printf("%p", p);

    return 0;
}