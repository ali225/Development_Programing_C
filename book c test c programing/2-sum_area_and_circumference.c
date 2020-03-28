#include <stdio.h>

int main()
{
	int r;
	float pi = 3.14, area, cir;
	
	printf("Enter the redius of circle :");
	scanf("%d",&r);
	
	area = pi*r*r;
	printf("the area of circle :%f\n",area);

	cir = 2*pi*r;
	printf("the circumference : %f\n",cir);
	
}