#include <stdio.h>

int main() {
    int a[11] = {99, 2, 3, 4, 5, 6, 7, 9, 22};  // Leave space for new element
    int n = 9; // Actual number of elements
    int num = 8;
    int i;
    int found=1;
    for(i=0;i<n-1;i++)
    {
    	if(a[i]>a[i+1])
    	{
    		found=0;
    		break;
		}
	}
	if(found)
		{
			printf("\n The array is  sorted");
		}
		else
		{
		printf("\n The array is  not sorted");	
		}
    
    

    // Print array
    for(int j = 0; j < n; j++) {
        printf("\n %d\t", a[j]);
    }

    return 0;
}

