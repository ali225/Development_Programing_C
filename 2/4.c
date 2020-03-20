/*  sawp function cod in c  */

#include <stdio.h>

int max_fun(int x, int y, int z, int f);
int min_fun(int x, int y, int z, int f);

int main()
{
	int x = 20;
	int y = 30;
	int z = 40;
	int f = 4;
	int m,t;
	printf("x = %d\n",x);
	printf("y = %d\n",y);	
	printf("z = %d\n",z);
	printf("f = %d\n",f);
	
	
	m=max_fun(x,y,z,f);
	t=min_fun(x,y,z,f);
	printf("the max value %d\n",m);
	printf("the mini value %d\n",t);
	return 0;
}

int max_fun(int x, int y, int z, int f)
{
	int var;
	if(x > y && x > z && x > f){
		var = x;
	}
	else if(y > x && y > z && y > f)
	{
		var = y;
	}
	else if(z > x && z > y && z > f)
	{
		var = z;
	}
	else if(f > x && f > z && f > y)
	{
		var = f;
	}
	else
	{
		printf("the max value : %d",var);
	}
	return var;
}
int min_fun(int x, int y, int z, int f)
{
	int var;
	if(x < y && x < z && x < f){
		var = x;
	}
	else if(y < x && y < z && y < f)
	{
		var = y;
	}
	else if(z < x && z < y && z < f)
	{
		var = z;
	}
	else if(f < x && f < z && f < y)
	{
		var = f;
	}
	else
	{
		printf("the min value : %d",var);
	}
	return var;
	
}