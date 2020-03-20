/*  ask user input number uesd while loop cod in c  */

#include <stdio.h>

int main()
{
	int x = 12;
	
	printf("Enter the number 3 * 4 = \n");
	scanf("%d",&x);
	
	while(x !=5)
	{
		printf("try again \n");
		scanf("%d",&x);
	}
	
	printf("Thanks ");

}