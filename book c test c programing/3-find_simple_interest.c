#include <stdio.h>
#include <conio.h>

int main()
{
	int p,r,t,si;
	
	printf("Enter rate");
    scanf("%d%d%d",&p,&r,&t);
	
	si =(p*r*t)/100;
	printf("simple intrest= %d",si);
}