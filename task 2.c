#include <stdio.h>

int main() {
    int a, b, c;

    // Tell user to enter the two integer values
    printf("Enter first integer: ");
    scanf("%d", &a);
    
    printf("Enter second integer: ");
    scanf("%d", &b);

    // Display the original values
    printf("Original values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swap the values using a temporary variable c
    c = a;
    a = b;
    b = c;

    // Display the swapped values
    printf("Swapped values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}