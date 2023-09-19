#include <stdio.h>
int main()
{
char c;

printf("Enter a character: \n");
scanf(" %c",&c);
printf("The ascii value of the ch variable is :\n%d", c);
printf("\n");

if (c >= 65 && c <= 90)
  {
   printf("Capital letter\n");
  }
if (c >= 97 && c <= 122)
  {
   printf("Small letter\n");
  }
if (c >= 48 && c <= 57)
  {
   printf("Digit\n");
  }
else
  {
   printf("Special character\n");
  }
  
return 0;
}  
