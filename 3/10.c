#include <stdio.h>


void Binary_sarch();
void Bubble_sort(int array[], int size);
void selection_sort(int array[], int size);

void main(void)
{
	int array[10];
	int i,j,z;
	int size =10;
	
	/*input array user */
	for( i=0; i<size; i++)
	{
		printf("Enter pleas array %d=",i);
		scanf("%d",&array[i]);
	}
	
	for( i=0; i<size; i++)
	{
		printf("The array that %d:%d \n",i,array[i]);
	}
	
	
	/*Bubble_sort  */
	Bubble_sort(array,size);
 
	/* for( i=0; i<size-1; i++)
	{
		for( j=0; j<size-i-1; j++)
		{
			if(array[j] > array[j+1])
			{
				z = array[j];
				array[j] = array[j+1];
				array[j+1] = z;
			}
		}
	}  */
	/*selection sort*/
	//selection_sort(&array,size);
	 
	for( i=0; i<size-1; i++)
		{
			for( j=i+1; j<size; j++)
			{
				if(array[i] > array[j])
				{
				z= array[i];
				array[i]= array[j];
				array[j]= z;
				}				
			}
		} 
		
		
	/*Binary_sarch  */
	

	for( i=0; i<size; i++)
	{
		printf("The array that %d:%d \n",i,array[i]);
	}

	while(1);
}



/* 
void selection_sort(int array[], int size)
{
	int i , j , z;
	
for( i=0; i<size-1; i++)
	{
		for( j=i+1; j<size; j++)
		{
			if(array[i] > array[j])
			{
				z= array[i];
				array[i] array[j];
				array[j]= z;
			}				
		}
	}
} */

void Bubble_sort(int array[], int size){
	
	int i , j, z;
	
	for( i=0; i<size-1; i++)
	{
		for( j=0; j<size-i-1; j++)
		{
			if(array[j] > array[j+1])
			{
				z = array[j];
				array[j] = array[j+1];
				array[j+1] = z;
			}
		}
	} 
}  