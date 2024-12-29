// access array by index
#include <stdio.h>

int main() {
    int arr[] = {12, 34, 67, 98};
    
    printf("%d\n", arr[0]);
    

    return 0;
}


// loop throw the array
#include <stdio.h>

int main() {
    int arr[] = {12, 34, 67, 98};
    int i;
    int length = sizeof(arr) / sizeof(arr[0]) - 1;
    
    for(i = 0; i <= length; ++i) {
        printf("%d\n", arr[i]);
    }

    return 0;
}