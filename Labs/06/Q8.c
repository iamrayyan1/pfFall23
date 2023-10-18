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
    printf("Output:\n");
    for(i=a-1;i>=0;i--)
	{
	printf("%d",arr[i]);
    }
}
