/*  factoril  number  cod in c  */

#include <stdio.h>

int main()
{
	int fact=1;
	int number;
	
	printf("Enter number of factoril \n ");
	scanf("%d",&number);
	
	do{
		fact *=number--;
		
	}while(number>0);
	
	printf("Factoril = %d ",fact);
}