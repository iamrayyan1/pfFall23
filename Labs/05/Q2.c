#include <stdio.h>;
int main(void)
{
float time = 0;

printf("Enter time: ");
scanf("%f", &time);

if (time >= 5 && time <= 11)
{
	printf("Good Morning\n");
}
if (time >= 12 && time <= 18)
{
	printf("Good Evening\n");
}
if (time > 18 && time <= 24)
{
	printf("Good Night\n");
}
if (time > 24)
{
	printf("Invalid Input\n");
}
}
