#include <stdio.h>
#include <conio.h>

int main()
{	
	int n,a,r=0;
	
	printf("enter any number :");
	scanf("%d",&n);
	while(n>=1)
	{
		a = n%10;
		r = r*10+a;
		n=n/10;
	}
	printf("reverse = %d",r);
}
