#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));  // create array in heap

    // take input
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // print array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr); // free heap memory
    return 0;
}

