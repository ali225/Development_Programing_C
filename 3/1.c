#include <stdio.h>

void main(void)
{
	int array[10];
	int i;
	int sum=0;
	
	for( i=0; i<9; i++)
	{
		printf("pleas enter number %d:",i);
		scanf("%d",&array[i]);
		sum +=array[i];
	}
	
	printf("the sum of array = %d",sum);

	
	
}