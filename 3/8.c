#include <stdio.h>


void main()
{
	int i,z,j;
	int size =10;
	int array[10];
	int max , min;
	
/* Scan the values loop */
	for (i=0;i<10;i++)
	{
		printf("Please Enter number %d:  ",i);
		scanf ("%d",&array[i]);
	}
	
	/* Sort the values using Bubble sorting */
	for (i=0; i<size-1;i++)
	{
		 for (j = 0; j < size-i-1; j++) 
		{
			if(array[j] > array[j+1])
			{
				/* Swap */
				z = array[j+1];
				array[j+1] = array[j];
				array[j] = z;
			}
		}
	}
	
	printf("The minimum number is %d\n",array[0]);
	printf("The maximum number is %d",array[9]);
}
	/* max = array[0];
	min = array[0];
	
	for(i=0 ; i<9 ; i++)
	{
		if(max < array[i])
		{
			max = array[i];
		}
		else if(array[i] < min)
		{
			min = array[i];
		}
	}
	printf("the maximum = %d\n",max);
    printf("the minimum = %d",  min);
	
} */