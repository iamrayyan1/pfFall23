/*#include <stdio.h>

int main () 
{
    int n; 
    int total=21; 


     while (total > 1 ) 
	 {
        printf("USER'S TURN:\n");
        printf ("It is your turn\n");
        printf ("Please pick up 1,2,3 or 4 matchsticks\n");
        scanf ("%d", &n);
         
        if (n < 1 || n > 4) 
			 {
                printf ("Invalid Input\n\n");
       }

        total = total - n;
        printf ("The number of matchsticks now is: %d\n", total);
        printf("\n");
        printf("COMPUTER'S TURN: \n");
        total = total - (5 - n);
        printf ("The number of matchsticks now is: %d\n", total);
        printf("\n"); 
     }

 printf ("YOU LOSE!! HAHAHAHAA...");

 return 0;
} */



#include <stdio.h>
int main () 
{
    int n,a; 
    int total=21; 


     while (total > 1 ) 
	 {
        printf("USER'S TURN:\n");
        printf("There are %d matchsticks. Pick 1, 2, 3, or 4: ", total);
        scanf("%d", &n);
         
        if (n < 1 || n > 4) 
			 {
                printf ("Invalid Input\n\n");
             }

        total = total - n;
        printf ("The number of matchsticks remaining: %d\n\n", total);
        printf("COMPUTER'S TURN: \n");
        a = 5 - n;
        total = total - a;
        printf("Matchsticks picked: %d\n\n",a);
     }

 printf ("YOU LOSE!! HAHAHAHAA...");

 return 0;
}
