/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description: Decide car usage
* Related Files:
*/

#include <stdio.h>

int decideCarUsage(void);
int main(void)
{
    decideCarUsage();
}

int decideCarUsage(void)
{
	int a,b,i,j;
	printf("Enter the numeric part of your car's number plate: ");
	scanf("%d",&a);
	printf("Day of the week (1 to 7): ");
	scanf("%d",&b);
	
	int yes = 1;
	if(a%2 == 0 && b%2 != 0)
	{
		yes = 0;
	}
	if(a%2 != 0 && b%2 == 0)
	{
		yes = 0;
	}
	if(yes == 1)
	{
		printf("You CAN use your car TODAYY");
	}
	else
	{
		printf("You CAN'T use your car TODAYY");
	}
	return 0;
}
	
