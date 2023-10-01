#include <stdio.h>
int main(void)
{
	int total = 0, save = 0;
	int discount = 0;
	
	printf("Get upto 50 percent off on Eid Sale\n");
	
	printf("Enter Total Amount: ");
	scanf("%d", &total);
	
	if(total >= 2000 && total <= 4000)
	{
		save = total * 0.2;	
	}
	if(total >= 4001 && total <= 6000)
	{
		save = total * 0.3;	
	}
	if(total > 6000)
    {

		save = total * 0.5;	
	}
	    
  (discount = total - save);
  printf("Total Cost Before Discount: %d\n", total);
  printf("Amount Saved: %d\n", save);
  printf("Total Price After Discount: %d\n", discount);
return 0;
}

