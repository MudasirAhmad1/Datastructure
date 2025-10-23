#include <stdio.h>

int main() {
    int a[11] = {1, 2, 3, 4, 5, 6, 7, 9, 22};  // Leave space for new element
    int n = 9; // Actual number of elements
    int num = 8;
    int i;

    for(i=n-1;i>=0 && a[i]>num;i--)
    {
    	a[i+1]=a[i];
	}
	a[i+1]=num;
	n++;

    // Print array
    printf("Array after insertion:\n");
    for(int j = 0; j < n; j++) {
        printf("%d\t", a[j]);
    }

    return 0;
}

