#include <stdio.h>
#include <string.h> // Include for strcpy()

struct student {
    int id;
    char name[50]; // Specify a fixed size for the character array
};

int main() {
    struct student s1;
    
    s1.id = 1001;
    strcpy(s1.name, "Mahfuz Alam"); // Use strcpy to copy a string into the array
    
    printf("Student id is: %d\n", s1.id);
    printf("Student name is: %s\n", s1.name); // Use %s for string output

    return 0;
}
