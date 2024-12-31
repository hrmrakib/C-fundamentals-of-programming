#include <stdio.h>

void whoAmI(char name[], int age) {
    printf("My name is %s and age %d\n", name, age);
}

int main() {
    whoAmI("Rakib", 23);
    
    printf("Hello World!");

    return 0;
}
