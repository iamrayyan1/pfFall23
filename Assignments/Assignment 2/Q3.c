/*
* Programmer: Rayyan Merchant
* Date: 31st Oct 2023
* Description: Flight ticketing information system
*/

#include <stdio.h>

int main()
{
	int flight[5][2] = 
	{
           {300, 0},
           {320, 310},
           {0, 280},
           {380, 0},
           {375, 400}
       };
    
    const char* days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    printf("%9s %9s %9s %9s %9s\n", "Day", "Morning", "Price", "Evening", "Price");

    for (int i = 0; i < 5; i++) 
	{
        printf("%9s", days[i]);

        for (int j = 0; j < 2; j++) 
		{
            if (flight[i][j] == 0) 
			{
                printf("%9d %9s", 0, "-");
            } else 
			{
                printf("%9d %9d", 1, flight[i][j]);
            }
        }
        printf("\n");
    }

    int time, price;
    printf("\nEnter flight time (0800-1900 hours): ");
    scanf("%d", &time);

    if (time < 8 || time > 19) 
	{
        printf("No flights available during that time slot\n");
        return 0;
    }

    printf("Enter flight price: ");
    scanf("%d", &price);

    if (price < 280) 
	{
        printf("No flights available for $%d\n", price);
        return 0;
    }
   printf("\n"); 
   int j;
   const char* slot;
    
   if (price >= 280) 
   {
        if (time < 14) 
		{
            j = 0;
            slot = "Morning";
        } 
		else 
		{
            j = 1;
            slot = "Evening";
        }
        
        for (int i = 0; i < 5; i++) 
		{
            if (flight[i][j] > 0 && flight[i][j] <= price) 
			{
                printf("A %s flight on %s is available for $%d\n", slot, days[i], flight[i][j]);
            }
        }
    }
    
    printf("\nWhat time slot do you prefer?\nFor Morning Press '0', For Evening press '1': ");
    scanf("%d",&j);
    
    if(j==0)
    {
    	slot = "Morning";
    }
    else if(j==1)
    {
    	slot = "Evening";
	}
	else
	{
		printf("\n\nError,Try Again!");
		return 0;
	}
    printf("\n");
	for (int i = 0; i < 5; i++) 
	{
        if (flight[i][j] != 0) 
		{
            printf("A %s flight on %s is available for $%d", slot, days[i], flight[i][j]);
        } 
		else 
		{
            printf("No %s flight on %s\n", slot, days[i]);
        }
    }
    
    int day;

    printf("\nEnter the weekday (1-5) you would like to see available flights for: ");
    scanf("%d", &day);
    printf("\n");

    if (day >= 1 && day <= 5) 
    {
        day--;
		
        if (flight[day][0] != 0) 
        {
            printf("A morning flight is available for $%d on %s\n", flight[day][0], days[day]);
        }
        if (flight[day][1] != 0) 
        {
            printf("An evening flight is available for $%d on %s\n", flight[day][1], days[day]);
        }
    } 
    
    return 0;
}
