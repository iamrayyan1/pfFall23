/*
* Programmer: Rayyan Merchant
* Date: 31st Oct 2023
* Description: Flight ticketing information system
*/

#include <stdio.h>
#include <string.h>

int main() 
{
    int flightTimes[5][2] = 
	{
        {300, 0},
        {320, 310},
        {0, 280},
        {380, 0},
        {375, 400}
    };

    char* days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    printf("%9s %9s %9s %9s %9s\n", "Day", "Morning", "Price", "Evening", "Price");

    for (int i = 0; i < 5; i++) 
	{
        printf("%9s", days[i]);
        
        for (int j = 0; j < 2; j++) 
		{
            if (flightTimes[i][j] == 0) 
			{
                printf("%9d %9s", 0, "-");
      } 
            else 
			{
                printf("%9d %9d", 1, flightTimes[i][j]);
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

    printf("\nEnter flight price (>= $300): ");
    scanf("%d", &price);

    if (price < 300) 
	{
        printf("No flights available for $%d\n", price);
        return 0;
  }


