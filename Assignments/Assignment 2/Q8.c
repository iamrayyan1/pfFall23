/*
* Programmer: Rayyan Merchant
* Date: 31st Oct 2023
* Description: Calculating persistence
* Related Files:
*/

#include <stdio.h>

int main()
{
	int n,rem,product,persistence;
	
	while(1)
	{
		printf("\nEnter a positive number or Press Ctrl+C to exit form program\n");
	    scanf("%d",&n);
	    
	    product = n;
	    persistence = 0;
	    
	    while(product>=10)
	    {
	    	int temp = 1;
	    	
	    	while(product>0)
	    	{
	    		rem = product % 10;
	    		temp = temp * rem;
	    		product = product / 10;
			}
			product = temp;
	    	persistence++;
	    	
	    }	
		printf("Persistence of %d is %d\n",n,persistence);
	}
	
}
