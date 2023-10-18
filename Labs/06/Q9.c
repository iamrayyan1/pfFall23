#include <stdio.h>

int main(void){
	
	int a,i,j,arr[100000];
	
	printf("Enter size of Array: ");
	scanf("%d",&a);
//	int arr[a];
	
	printf("Input Elements of Array: ");
	for(i=0;i<a;i++)
	{
	scanf("%d",&arr[i]);
    }
   
    printf("Array is: \n");
	for(i=0;i<a;i++)
	{
	printf("%d\t",arr[i]);
    }
    
	int min = arr[0];
	int max = arr[0];
	
	for(i=1;i<a;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
		}
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}   
	printf("\nMaximum: %d",max);
	printf("\nMinimum: %d",min); 
}
