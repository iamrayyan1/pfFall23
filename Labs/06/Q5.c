#include <stdio.h>

int main () 
{
    int r=0; 
    int n; 
    
    printf ("Enter the number of rows you want: ");
    scanf ("%d", &n);

    do 
    {
        if (r%2 == 0)
        {
            printf ("%d \t" ,r);
            printf ("%d \t" ,r);
            printf ("%d \t" ,r);
            printf ("%d \n" ,r);
        } 
        else 
        {
            printf ("  \t");
            printf ("%d \t", r);
            printf ("%d \t" ,r);
            printf ("  \n");
        }
    r = r + 1;
    } while (r <= n);
}
