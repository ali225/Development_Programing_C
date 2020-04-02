#include <stdio.h>
#include <stdlib.h>

void Binary_search(int array[], int size ,int number);
void Bubble_sort(int array[], int size);
void selection_sort(int array[], int size);
void Liner_search(int array[] ,int size ,int search);
void Print_Binary(int number);


int main(void)
{
	int array[10];
	int i,number;
	int size =10;


	/*input array user */
	for( i=0; i<size; i++)
	{
		printf("Enter pleas array %d=",i);
		scanf("%d",&array[i]);
	}

	/*Bubble_sort  */
	//Bubble_sort(array,size);

	/*selection sort*/
	//selection_sort(array,size);

	/*print the array */
	for( i=0; i<size; i++)
	{
		printf("\n The array that %d:%d \n",i,array[i]);
	}

	printf("Enter the number you need ");
	scanf("%d",&number);

	Print_Binary(number);
	/*Binary_search  */
	//Binary_search(array,size,10);

    /*Liner search*/
    // Liner_search(array ,size,number);



    return 0;
}

void Print_Binary(int number)
{
    int i;
    int mask =0x80000000;
    int count_zero=0;
    int count_one=0;
    printf("print Binary number this number %d =",number);

    for( i=0; i<32; i++)
    {
        ((number<<i)&mask)?++count_one:++count_zero;
    }
    printf("\n");
    printf("the count one = %d\n",count_one);
    printf("the count zero = %d\n",count_zero);

}


void Liner_search(int array[] ,int size ,int search)
{
    int i;
    int FoundFlag =0;

    for(i=0; i<size; i++)
    {
        if (search == array[i])
        {
            FoundFlag = 1;
            break;
        }
    }
    if (FoundFlag == 1)
		printf("the value =%d",array[i]);
	else
		printf("Value not Found");
}
void Binary_search(int array[],int size,int number)
{
   int Left =0;
   int Right= size-1;
   int counter;
   int FoundFlag =0;

	while(Left <= Right)
	{
		counter = (Left +Right)/2;

		if(number == array[counter])
		{
			FoundFlag =1;
			break;
		}
		else if(number > array[counter])
			Left = counter + 1;
		else
			Right = counter -1;
	}
	if (FoundFlag == 1)
		printf("Value is  Found");
	else
		printf("Value not Found");
}
void selection_sort(int array[], int size){

int i , j , z;

    for( i=0; i<size-1; i++)
        {
            for( j=i+1; j<size; j++)
            {
            if(array[i] > array[j])
			{
				z= array[i];
				array[i] = array[j];
				array[j]= z;
			}
		}
	}
}

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
