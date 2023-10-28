/*
* Programmer: Rayyan Merchant
* Date: 10/28/23
* Description: Team batting stats
* Related Files:
*/

#include <stdio.h>

int main(void)
{
	int players,innings,i,j;
	
	printf("Enter number of players in the team: ");
	scanf("%d",&players);
	printf("Enter the number of innings: ");
	scanf("%d",&innings);

	int team[players][innings];
	
	printf("\nEnter players batting stats:\n");
	for(i=0; i<players; i++)
	{
	    printf("\n");
		printf("Enter #%d batsman innings scores:\n\n", i+1);
		for(j=0; j<innings; j++)
		{
			printf("Innings %d score:\n", j+1);
			scanf("%d",&team[i][j]);
			}
	}
	
	printf("\nTeam Stats:\n");
	
	for( i=0;i<players; i++)
	{
		int total=0,fifty=0,century=0,highestScore=0;
		float average;
		printf("\nBatsman #%d:\n",i+1);
		for(j=0; j<innings; j++)
		{
				
			total = total + team[i][j];
			
			if(team[i][j]> highestScore)
			{
			   highestScore = team[i][j];
		    }
			
			if(team[i][j]>=100)
			{
				century++;
			}
		    else if(team[i][j]>50 && team[i][j]<100)
			{
				fifty++;
		    }
		    
	    }
	    average = (float)total / innings;
		printf(" Total: %d\n Average: %.2f\n Highest Score: %d\n Fifties: %d\n Centuries: %d\n",total,average,highestScore,fifty,century);
	}
}
