#include<stdio.h>
#include<stdlib.h>

main() 
{
  int n;
  printf("Enter the size of all the arrays: ");
  scanf("%d",&n);

  int i;
  char arra[n];
  int arrb[n];
  long long int arrc[n];

  for ( i = 0; i < n; i++) 
  {
        arra[i]=rand()%128;
  }

for ( i = 0; i < n; i++) 
   {
        arrb[i]=rand();
    }

  for ( i = 0; i < n; i++) 
   {
  	
        arrc[i]=rand()*rand();
    }
   
  printf("\nCharArray:\n");
    for ( i = 0; i < n; i++) 
	{
        printf("Address: %p, Value: %c\n", (void*)&arra[i], arra[i]);
    }
   
    printf("\nintArray:\n");
    for ( i = 0; i < n; i++) 
	{
        printf("Address: %p, Value: %d\n", (void*)&arrb[i], arrb[i]);
    }

    printf("\nlongLongIntArray:\n");
    for ( i = 0; i < n; i++) 
	{
        printf("Address: %p, Value: %lld\n", (void*)&arrc[i], arrc[i]);
    }
}


	
