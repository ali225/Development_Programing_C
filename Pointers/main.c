#include <stdio.h>
#include <stdlib.h>

void Get_Max_fun(void);
void even_odd(void);
void swap(int* n1, int* n2);
void Pyrmed(void);

int main()
{
    //Get_Max_fun();
    //even_odd();
//    int* pc, c;
//    pc = &c;
//    *pc = c;
//
//   c = 22;
//   printf("Address of c: %p\n", &c);
//   printf("Value of c: %d\n\n", c);  // 22
//
//   pc = &c;
//   printf("Address of pointer pc: %p\n", pc);
//   printf("Content of pointer pc: %d\n\n", *pc); // 22
//
//   c = 11;
//   printf("Address of pointer pc: %p\n", pc);
//   printf("Content of pointer pc: %d\n\n", *pc); // 11
//
//   *pc = 2;
//   printf("Address of c: %p\n", &c);
//   printf("Value of c: %d\n\n", c); // 2
    //int n1=10, n2=20;

    //swap(&n1,&n2);

    //printf("the number : %d\n",n1);
    //printf("the number : %d",n2);


    // unsigned int i = 500;

  //while(i++ != 0);
  //printf("%d",i);

    Pyrmed();

    return 0;
}

void Pyrmed(void)
{

 int i, j;
  int n = 5;

  for( i=0; i<=n; i++)
  {
    for( j=0; j <= 2*n-1; j++)
    {
        if( j >= n-(i-1) && j <= n+(i-1))
        {
            printf("*");
        }
        else
        {
        printf(" ");
        }
    }
    printf("\n");
  }
}

void swap(int* n1, int* n2)
{
    int temp;
    temp =*n1;
    *n1 = *n2;
    *n2 = temp;
}
void even_odd(void)
{
    int input;

    printf("Enter number pleas :");
    scanf("%d",&input);

    if ((input%2) == 0)
    {
       printf("the even number ");
    }
    else
    {
        printf("the odd number ");
    }

}

void Get_Max_fun(void)
{

    int num1,num2,num3;
    int num_max;
    printf("Enter the number of\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    num_max = num1;

    if(num2 > num_max)
    {
        num_max = num2;
    }
    if(num3 > num_max)
    {
        num_max = num3;
    }
    printf("the max number :%d ",num_max);

}
