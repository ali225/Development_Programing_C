/*  sawp function cod in c  */

#include <stdio.h>

int swab_fun(int x, int y);

int main()
{
	int x = 20;
	int y = 30;
	printf("x = %d\n",x);
	printf("y = %d\n",y);
	
	swab_fun(x,y);
	printf("After swab\n");
	printf("x = %d\n",x);
	printf("y = %d\n",y);
	

}

int swab_fun(int x, int y)
{
	int z = x;
	x = y;
	y = z;
}