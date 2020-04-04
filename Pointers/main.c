#include <stdio.h>
#include <stdlib.h>
#define ops 4

void Get_Max_fun(void);
void even_odd(void);
void swap(int* n1, int* n2);
void Pyrmed(void);
void fibonacci(void);
void Add_two_number(int x, int y);
void Floyds_tringle(void);
int counter_one(int num);
void maxmin(int array[], int len , int *min, int *max);
//void pointr(void);

float sum(float a, float b){return (a+b);}
float sub(float a, float b){return (a-b);}
float Mul(float a, float b){return (a*b);}
float Divi(float a, float b){return (a/b);}


int main()
{
    float (*Ptr[ops])(float ,float) = {sum,sub,Mul,Divi};
    int choice;
    float a, b;
    printf("Enter the choice pleas 0 = sum , 1 = sub  ,2 = sub  ,3 Divi \n");
    scanf("%d",&choice);

    printf("Enter the two number ");
    scanf("%f %f",&a ,&b);

    printf("that is %f ", Ptr[choice](a,b));
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

    //Pyrmed();

   // fibonacci();

   // Add_two_number(10, 5);

    //Floyds_tringle();
    //int x;

    //x = counter_one(435);
   // printf("the number is = %d",x);

   // int array[] = {4,5,65,2,43,64,768,68,68,68,68678,7876,8768,787,8,768,78,78,768,786764,554,5};
   // int max , min;
    //int len = sizeof(array) / sizeof(array[0]);
    //maxmin(array,len ,&min,&max);

    //printf("the min of array = %d and the max of array = %d", min ,  max);

    //pointr();

    return 0;
}


void pointr(void)
{

int a[] = {5,16,7,89,45,32,23,10};

  int *p = &a[1];
  int *q = &a[5];

//  printf("%d\n",q);
 // printf("%d\n", p);

  printf("%d\n", *(p+3));
  printf("%d\n", *(q-3));

  printf("%d\n", q - p);
  printf("%d\n", p < q);
  printf("%d\n",  *p < *q);
}
void maxmin(int array[], int len , int *min, int *max)
{
    *min = *max = array[0];

    int i;
    for( i=0; i<len; i++)
    {
        if(*max < array[i] )
        {
            *max = array[i];
        }
        else if ( array[i] < *min)
        {
            *min = array[i];
        }
    }
}



int counter_one(int num)
{
    int count =2;
    while(num)
    {
        count++;
        num >>=2;
    }
    return count;
}

void Floyds_tringle(void)
{
    int i, j, n, rows;

    printf("Enter the rows pleas :");
    scanf("%d",&rows);
    n = 1;

    for( i=1; i<=rows; i++)
    {
        for ( j=1 ; j<=i; j++)
        {
            printf("%d",n);
            n++;
        }
        printf("\n");
    }


}

void Add_two_number(int x, int y)
{

    if(y > 0)
    {
        while(y !=0)
        {
            x++;
            y--;
        }

    }
    else if(y < 0)
    {
        while(y !=0)
        {
            x--;
            y++;
        }
    }
    printf("the sum is : %d",x);
}

void fibonacci(void)
{
    int i , result, n;
    int a = 0;
    int b = 1;


    printf("Enter the number you need Fibonacci Series ");
    scanf("%d",&n);

    for( i=0; i<n; i++)
    {
        printf("%d ",a);
        result = a + b;
        a = b;
        b = result;
    }

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
