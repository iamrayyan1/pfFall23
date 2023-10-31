/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description: Swap Integers using Pointers
* Related Files:
*/

#include <stdio.h>


swap(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int j=2,k=5;
	printf("j=%d , k=%d",j,k);
	swap(j,k);
	printf("j=%d,k=%d",j,k);
	return 0;
}
