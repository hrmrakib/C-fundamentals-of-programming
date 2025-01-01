#include <stdio.h>
#include <string.h> // Include for strcpy()

struct student {
    int id;
    char name[50]; // Specify a fixed size for the character array
};

int main() {
    struct student s1;
    
    // One way
    s1.id = 1001;
    strcpy(s1.name, "Mahfuz Alam"); // Use strcpy to copy a string into the array
    printf("Name: %s and id: %d\n", s1.name, s1.id);
    
    // Another way
    struct student s2 = {1002, "Asif Mahmud"};
    printf("Name: %s and id: %d\n", s2.name, s2.id);

    return 0;
}
