/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description:
* Related Files:
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int p1_d, p1_m, p1_y, p2_d, p2_m, p2_y;
	
	printf("Enter Person 1 DOB in dd/mm/yyyy: ");
	scanf("%d/%d/%d", &p1_d, &p1_m, &p1_y);
	printf("Enter Person 2 DOB in dd/mm/yyyy: ");
	scanf("%d/%d/%d", &p2_d, &p2_m, &p2_y);
	
	if (p1_y = p2_y)
	{
		if (p1_m = p2_m) 
		{
			if (p1_d = p2_d)
			{
				printf("Same Age \n");
			}
			else if (p1_d > p2_d)
			{
				printf("Person 2 is older \n");
			}
			else
			{
				printf("Person 1 is older \n");
			}	
	    } 
		    else if (p1_m > p2_m)
			{
				printf("Person 2 is older \n");
			}
			else
			{
				printf("Person 1 is older \n");
		    }
	}
	        else if (p1_y > p2_y)
			{
				printf("Person 2 is older \n");
			}
			else
			{
				printf("Person 1 is older \n");
		    }
}

