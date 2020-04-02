#include <stdio.h>

void main(void)
{
	int array[10];
	int i;
	int number;
	int count=0;
	
	
	for( i=0; i<9; i++)
	{
		printf("Enter the array :");
		scanf("%d",&array[i]);
	}
	
	printf("Enter the number you need ");
	scanf("%d",&number);
	
	for( i=0; i<9; i++)
	{
		if(array[i] == number)
		{
			count++;
		}
	}
	
	printf("the number of counter is :%d",count);
	
	while(1);
}