#include <stdio.h>

int main() {
    int arr[] = {12, 35, 65, 48, 88};
    int *p = arr;
    
    for(int i = 0; i < 5; ++i){
        printf("%d\n", *(p + 1));
    }

    return 0;
}