#include <stdio.h>

int main() {
    int a = 0;      // First Fibonacci number
    int b = 1;      // Second Fibonacci number
    int c;          // To store next Fibonacci number

    printf("Fibonacci series: ");

    for (int i = 0; i < 10; i++) {
        printf("%d ", a);   // Print current number

        c = a + b;          // Calculate next number by adding previous two
        a = b;              // Move 'b' to 'a'
        b = c;              // Move 'c' to 'b' for next iteration
    }

    printf("\n");
    return 0;
}

