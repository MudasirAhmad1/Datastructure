#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int size;
	printf("Enter the size of Array");
	scanf("%d",&size);
	p=new int [size];
	for(int i=0;i<size;i++){
		printf("Enter the element:");
		scanf("%d",&p[i]);
	}
	for(int i=0;i<size;i++){
		printf("Enter the element:");
		printf("\n");
		printf("%d",p[i]);
	}
	delete[] p;
}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int *p;
//    int size;
//
//    printf("Enter the size of Array: ");
//    scanf("%d", &size);
//
//    // Dynamic memory allocation using C++ style (new)
//    p = new int[size];
//
//    // Input elements
//    for (int i = 0; i < size; i++) {
//        printf("Enter element %d: ", i + 1);
//        scanf("%d", &p[i]);
//    }
//
//    // Output elements
//    printf("You entered:\n");
//    for (int i = 0; i < size; i++) {
//        printf("Element %d: %d\n", i + 1, p[i]);
//    }
//
//    // Freeing the memory (C++ style: delete[])
//    delete[] p;
//
//    return 0;
//}

