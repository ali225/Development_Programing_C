#include <stdio.h>
#include <conio.h>

int main()
{	
	int n,a,b,g;
	
	printf("enter any number :");
	scanf("%d",&n);
	
	a = (10*n)/100;
	b = (12*n)/100;
	g = n + a + b;
	printf("gross salary=%d",g);
}
