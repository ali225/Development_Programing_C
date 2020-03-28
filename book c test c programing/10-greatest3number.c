#include <stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter the 3 number ");
	scanf("%d%d%d",&a,&b,&c);
	
	if ((a>b)&&(a>c))
		printf("%d is greatest",a);
	if ((b>a)&&(b>c))
		printf("%d is greatest",b);
	if ((c>b)&&(c>b))
		printf("%d is greatest",c);
	
}