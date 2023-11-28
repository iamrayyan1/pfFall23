/*
 * Creator: Rayyan Merchant
 * Date: 21/11/23
 * Description: Add 45 days to a struct of date inputted by the user
 */

#include <stdio.h>

typedef struct 
{
	int date;
	int month;
	int year;
} Date;

int main()
{
	const int days = 45;
	Date current_date;

	printf("Enter date DD/MM/YY: ");
	scanf("%d/%d/%d", &current_date.date, &current_date.month, &current_date.year);

	
	current_date.date += days % 30;
	
	if (current_date.date > 30) current_date.date %= 30, current_date.month++;

	current_date.month += days / 30 % 12;
	
	if (current_date.month > 12) current_date.month %= 12, current_date.year++;


	printf("%d/%d/%d", current_date.date, current_date.month, current_date.year);
	return 0;
} 
