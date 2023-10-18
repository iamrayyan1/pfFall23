#include <stdio.h>

int main(void){
	
	int a,i,sum=0;
	
	printf("Enter size of Array: ");
	scanf("%d",&a);
	int arr[a];
	
	printf("Input Elements of Array: ");
	for(i=0;i<a;i++)
	{
	scanf("%d",&arr[i]);
	sum = sum + arr[i];
    }
    printf("Array is: \n");
	for(i=0;i<a;i++)
	{
	printf("%d\t",arr[i]);
    }
    printf("\nSum of all elements: %d",sum);
}
