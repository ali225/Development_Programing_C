#include <stdio.h>

void main(void)
{
	int array[10];
	int i,number;
	int count=0;
		
	for( i=0; i<9; i++)
	{
		printf("pleas enter number %d:",i);
		scanf("%d",&array[i]);
	}
	
	printf("Enter the number you need to count :");
	scanf("%d",&number);
	
	
	for( i=0 ; i<9; i++)
	{
		if(array[i] == number)
		{
			count++;
		}
	}
	
	printf("the count number is : %d",count);
		

	
	
	
}