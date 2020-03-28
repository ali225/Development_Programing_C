#include <stdio.h>

int main()
{
	int a,b;
	
	printf("Enter value for a & b:");
	scanf("%d%d",&a,&b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	printf("after swap : %d%d",a,b);
	
}