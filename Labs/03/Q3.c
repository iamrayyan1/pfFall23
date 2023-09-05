#include <stdio.h>
#include <math.h>

int main()
{
int a = 0;
int b = 0;
int x = 0;
printf("Enter base: ");
scanf(" %d" ,&a);
printf("Enter Hieght: ");
scanf(" %d" ,&b);

x = a*a + b*b;
float h =sqrt(x);

printf("hypotenuse is: %f" ,h);
}
