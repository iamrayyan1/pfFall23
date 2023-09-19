#include <stdio.h>;
int main(void)
{
int num = 0, rem = 0;

printf("Enter num: ");
scanf("%d", &num);

rem = num % 3;
if (rem == 0)
{
	printf("This number is multiple of 3\n");
}
else
{
	printf("This number is not multiple of 3");
}
}
