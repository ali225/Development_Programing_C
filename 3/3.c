#include <stdio.h>

void main(void)
{
	int array[10];
	int size = 10;
	int j,i,z;
	int stop =0;
		
	for( i=0; i<9; i++)
	{
		printf("pleas enter number %d:",i);
		scanf("%d",&array[i]);
	}
	
	for(i=0 ; i<size-1 && !stop;i++)
	{
		stop =1;
		for(j= size-1; j>i ; j--)
		{
			if (array[j] < array[j-1] )
			{
				z = array[j-1];
				array[j-1]= array[j];
				array[j] =z;
				stop=0;
			}
		}
	}
	
	printf("********************\n");
		
	for( i=0; i<9; i++)
	{
		printf("the new number = %d:",i);
		printf("%d\n",array[i]);
	}
	
	
	
	
}