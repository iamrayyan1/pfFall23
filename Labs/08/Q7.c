#include <stdio.h>

float calculateDiscount(float amount,int visit)
{
	float discount;
	if( amount>=50 && visit>10 )
	{
		discount = amount * 15/100;
	}
	else if( amount>=30 && visit>5 )
	{
		discount = amount * 10/100;
	}
	else
	{
		discount = 0;
	}
	return (discount);
}



int main()
{
	int visit;
	float amount,discount,payable;
	printf("Please enter the number of times you have visited the shop in past month: ");
	scanf("%d",&visit);
	printf("Enter your total purchase amount: ");
	scanf("%f",&amount);
	
	discount = calculateDiscount(amount,visit);
	
	printf("\nAmount before discount: %.2f",amount);
	printf("\nDiscount applied: %.2f",discount);
	
	payable = amount - discount;
	printf("\nAmount after discount: %.2f", payable);

  return 0;
}
