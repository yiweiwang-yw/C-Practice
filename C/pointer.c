#include <stdio.h>

int main() {
    int number = 42;        // A regular integer variable
    int *ptr;               // Declare a pointer to an integer

    ptr = &number;          // ptr now holds the address of number

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", (void*)&number);
    printf("Value of ptr: %p\n", (void*)ptr);
    printf("Value ptr is pointing to: %d\n", *ptr);

    // Modifying the value through the pointer
    *ptr = 100;
    printf("New value of number: %d\n", number);
    printf("New value of ptr: %p\n", (void*)ptr);

    return 0;
}