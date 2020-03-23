#include <stdio.h>

void main(void)
{
	int array[10];
	int size = 10;
	int i,j,z;
	int stop=0;
	
	/* Scan the values loop */
	for (i=0;i<10;i++)
	{
		printf("Please Enter number %d:",i);
		scanf ("%d",&array[i]);
	}
	
	/* Sort the values using Selection sorting */
	for(i=0 ; i < size-1 ; i++)
	{
		for(j=i+1 ; j<size ; j++)
		{
			if(array[i] > array[j])
			{
				z = array[j];
				array[j] = array[i];
				array[i] = z;
			}
		}
	}
	/* Print the values after sorting */
	printf("Values after sorting are:\n");
	for (i=0;i<10;i++)
	{
		printf("%d\n",array[i]);
	}
}

