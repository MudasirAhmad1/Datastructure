#include <stdio.h>

int main() {
    int poly[4] = {1, 2, 3, 4}; // poly[0] = 1 (x^0), poly[1] = 2 (x^1), ...

    int x = 2; // Let's evaluate P(2)
    int result = 0;

    for (int i = 0; i < 4; i++) {
        int term = poly[i];
        for (int j = 0; j < i; j++) {
            term *= x; // Multiply by x^i
        }
        result += term;
    }

    printf("P(%d) = %d\n", x, result);
    return 0;
}

