#include <stdio.h>

void main(void)
{
	int array[10];
	int i;
		
	for( i=0; i<9; i++)
	{
		printf("pleas enter number %d:",i);
		scanf("%d",&array[i]);
	}
	
	printf("the rever number array");
	
	for( i>10; i>=0; i--)
	{
		printf("%d\n",array[i]);
	}
	
	
}