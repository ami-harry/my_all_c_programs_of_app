#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, sum = 0, happy, rem, temp;
    printf("Enter number till you want happny numbers:\n");
    scanf("%d", &happy);
    for (int i = 1; i <= happy; i++)
    {
        sum = 0;
        num = i;
        temp = num;
        while (sum != 1)
        {
            sum = 0;
            while (num > 0)
            {
                rem = num % 10;
                sum += (rem * rem);
                num /= 10;
            }
            num = sum;
        }
        if (sum == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}