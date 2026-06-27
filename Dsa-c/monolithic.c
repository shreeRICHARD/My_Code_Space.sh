#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: "); //everything written a function is a monolithic program
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum: %d\n", sum);

    // More unrelated logic could follow here within main
    // e.g., calculating product, printing messages, etc.

    return 0;
}