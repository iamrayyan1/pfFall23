
#include <stdio.h>;
int main(void)
{
char n;

printf("Are you sure to delete [Y/y] / [N/n] ?: ");
scanf(" %c", &n);

switch (n)
{
	case 'Y':
	case 'y':
		printf("Deleted successfully\n");
	    break;
	case 'N':
	case 'n':
		printf("Delete canceled\n");
	    break; 
	default:
	       printf("Please choose correct option"); 
}
return 0;	
}
