#include <stdio.h>

void whoAmI(char name[], int age) {
    int years = 2024;
    printf("My name is %s and age %d. Current year is %d\n", name, age, years);
}

int main() {
    whoAmI("Rakib", 23); 
    
    // printf("%d", years); // error: 'years' undeclared (first use in this function)
    
    printf("Hello World!");

    return 0;
}
