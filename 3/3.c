#include <stdio.h>

void main(void)
{
	int array[10];
	int size = 10;
	int j,i,z;
	int stop =0;
	
	for(i=0 ; i<9 ; i++)
	{
		printf("Enter the numebr of array : ");
		scanf("%d",&array[i]);
	}
	
	for(i=0; i<size-1 && !stop; i++)
	{
		stop=1;
		 for (j = 0; j < size-i-1; j++) 
		{
			if(array[j] > array[j+1])
			{
				/* Swap */
				z = array[j+1];
				array[j+1] = array[j];
				array[j] = z;
				
				stop=0;
			}
		}
	}
	
	
	
	printf("The out put of array ");
	for(i=0 ; i<9 ; i++)
	{
		printf("Enter the numebr of array :%d \n",array[i]);
	
	}
	
	
	
}