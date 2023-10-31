/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description: Multiplying two number using recursions
* Related Files:
*/

#include<stdio.h>
int multiply(int x, int y)
{
	if(y==0)
	return 0;
	
	return x + multiply(x,y-1);
	
}

int main()
{
	int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    printf("\n %d", multiply(a, b));
}
