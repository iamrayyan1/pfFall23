#include <stdio.h>
int main(void)
{
	int a,b,c,d,e,f,g,h;
	
	printf("Enter 8 bits, input should be either 0 or 1 \n");
	printf("Enter First bit: ");
	scanf("%d", &a);
	printf("Enter Second bit: ");
	scanf("%d", &b);
	printf("Enter Third bit: ");
	scanf("%d", &c);
	printf("Enter Fourth bit: ");
	scanf("%d", &d);
	printf("Enter Fifth bit: ");
	scanf("%d", &e);
	printf("Enter Sixth bit: ");
	scanf("%d", &f);
	printf("Enter Seventh bit: ");
	scanf("%d", &g);
	printf("Enter Eight bit: ");
	scanf("%d", &h);
	
	if( d = 1 ){
		d = 0;
	}
	if( g = 1 ){
		g = 0;
	} 
	printf("Your 8 bit number: \n %d%d%d%d%d%d%d%d", a,b,c,d,e,f,g,h);
return 0;
}
