#include <stdio.h>

int  main(void)
{
	int i; 
	int sum = 0; 
	int array[10];
	
	/*print plesa user input */
	for(i=0 ; i <=9; i++)
	{
		printf("pleas Enter the number of array %d:",i+1);
		scanf("%d",&array[i]);
		sum+=array[i];
	}
	
	/*the out put the array */
	printf("The sum of array = :%d",sum);
	while(1);
}