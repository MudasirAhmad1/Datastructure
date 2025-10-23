#include <stdio.h>

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 99, 122};
    int size = 10;
    int b[10];
    int num;
    for(int i=0;i<size;i++)
    {
    	a[i]=a[i+1];  
//    	printf("\t %d",a[i]);
	}
	a[size - 1] = 0;
	for(int i=0;i<size;i++)
    {
    	printf("\n");
    	printf("\t %d",a[i]);
    }
    
}


