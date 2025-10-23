#include <stdio.h>

// First: define the struct
struct test {
    int arr[5]; // an array of 5 integers
    int size;   // just an example additional field
};

// Second: function that accepts the struct
void fun(struct test t1) {
    // Print all array elements
    for (int i = 0; i < t1.size; i++) {
        printf("%d ", t1.arr[i]);
    }
    printf("\n");
}

int main() {
    // Initialize the struct
    struct test t = {
        {1, 2, 3, 4, 5}, // arr
        5                // size
    };
    // Call the function
    fun(t);

    return 0;
}

