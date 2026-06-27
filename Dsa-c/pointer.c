#include <stdio.h>

int main() {
    int a = 5;
    int *ptr = &a;   // Pointer points to a

    printf("a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("ptr stores = %p\n", ptr);
    printf("*ptr = %d\n", *ptr);  // Value at address

    *ptr = 20;  // Change value through pointer
    printf("Now a = %d\n", a);

    return 0;
}
