#include <stdio.h>

char string(void);

int main(void)
{
	string();
}

char string(void)
{
	int a,c,i,j;
	printf("Enter length of string you want to enter: ");
	scanf("%d",&a);
	
	char arr[a];
	
    
	for(i=0;i<a;i++)
	{
		printf("Enter Character %d:\n ",i+1);
		scanf(" %c",&arr[i]);
	}
	printf("\nlisted characters:\n");
	for(i=0;i<a;i++)
	{
		printf(" %c\t",arr[i]);
	}
	for(i=0;i<a;i++)
	{
		if(arr[i] =='a')
		c++;
	}
	printf("\nCount:%d",c);

}
