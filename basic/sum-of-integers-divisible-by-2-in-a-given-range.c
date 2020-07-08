#include <stdio.h>
#include<stdlib.h>
int main()
{
    int num1, num2, sum = 0;
    printf("Enter tfirst number\n");
    scanf("%d", &num1);
    printf("Enter second number\n");
    scanf("%d", &num2);
    for (int i = num1; i <= num2; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("The sum of integers divisible by 2 is %d:\n", sum);
    return 0;
}