#include <stdio.h>

int main() {
    char str[4];  // 3 letters + null character
    int i, j, k;

    printf("Enter 3 letters (no spaces): ");
    scanf("%3s", str);

    // Print all permutations of 3 letters by swapping indexes manually
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                // Check if i, j, k are all different positions
                if (i != j && j != k && i != k) {
                    printf("%c%c%c\n", str[i], str[j], str[k]);
                }
            }
        }
    }

    return 0;
}

