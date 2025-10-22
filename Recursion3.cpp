#include <stdio.h>

int function1(int n)
{
	static int x=0;
    if(n > 0) {
    	x++;
//        printf("%d\t", n);
//        printf("\nResult: %d\n", x);
        return function1(n - 1) + n;
    }
    return 0; // base case return
}

int main()
{
    int x = 5;
    int result;
    result = function1(x);
    printf("\nResult: %d\n", result);
    return 0;
}

