#include <stdio.h>

void swapIntegers(void);

int main(void)
{
	swapIntegers();
}

void swapIntegers()
{
	int a,b,temp=0;
	printf("Enter Num1 and Num2: ");
	scanf("%d %d",&a,&b);
	printf("Before Swapping:\n%d\t%d\n",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("After Swapping:\n%d\t%d\n",a,b);
}
