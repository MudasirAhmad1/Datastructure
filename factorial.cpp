#include <stdio.h>

int main() {
    int n = 5;
    int fact = 1;

    for (int i = n; i > 0; i--) {
        fact = fact * i;
    }

    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}

