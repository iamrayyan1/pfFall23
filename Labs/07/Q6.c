/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description: frequency of elements in array
* Related Files:
*/

#include <stdio.h>

int main(void) 
{
    int a,arr[10000],i,j,c,element;
    

    printf("Enter the number of elements in the array: ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++) 
	{
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    

    for (int i=0; i<a;i++) 
	{
        element = arr[i];
        c=0;
        
        if (element == -1) 
		{
            continue;
        }
        
        for (int j = i; j < a; j++) 
		{
            if (arr[j] == element) 
			{
                c++;
                arr[j] = -1;
            }
        }
        
        printf("frequency of %d = %d \n", element, c);
    }
   return 0; 
}
