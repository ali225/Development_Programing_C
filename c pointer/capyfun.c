#include "stdio.h"


void capy(int* from , int* to, int n )
{
	int i;
	
	for(i=0;i<n;i++)
	{
		*from = *to;
		from++;
		to++;
	}
}
int  main()	
{
        int i,y;
		
		int from[4]={3,5,2,4};
		int *to = from;
	
		capy(&from[4],&to[4],4);

		for( i =0;i<4; i++)
		{
		printf("the arry after to array : %d\n",from[i]);
			printf("the arry after : %d \n",to[0]);
			printf("the arry after : %d \n",to[1]);
			printf("the arry after : %d \n",to[2]);
			printf("the arry after : %d \n",to[3]);
		}
		
	
		return 0;
}

