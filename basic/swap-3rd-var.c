#include <stdio.h>
int main()
{
    int a, b, c = 0;
    printf("enter two numbers:\n");
    scanf("%d %d", &a, &b);
    printf("swapping the numbers using third variables::::\n");
    printf("before swapping the values are a= %d and b= %d\n", a, b);
    c = a;
    a = b;
    b = c;

    printf("after swapping the values are a= %d and b= %d\n", a, b);
    return 0;
}