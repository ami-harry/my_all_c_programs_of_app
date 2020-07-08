#include<stdio.h>
int main()
{
    int a, b;

    printf("Enter values for a and b:\n");
    scanf("%d %d, ",&a, &b);

    printf("values before swap:\n a=%d and b=%d\n\n", a,b);

    a=a+b;
    // printf("behind the scenes-->1. after swapping\na=%d\nb=%d\n",a,b);
    b=a-b;
    // printf("behind the scenes-->2. after swapping\na=%d\nb=%d\n",a,b);
    a=a-b;

    printf("finally after swapping\na=%d and b=%d\n",a,b);
   return 0;
}

