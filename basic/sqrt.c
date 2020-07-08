#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, mul = 0.0;
    float sum = 0.0;
    printf("Enter a and b\n");
    scanf("%d %d", &a, &b);
    // mul = a * b;
    // sum=a^2+mul*mul+b^2;
    sum=pow(a,2)+sqrt(a*b)+pow(b,2);
    printf("sum=%f\n",sum);
    return 0;
}