#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the number to check it is perfect no or not:\n");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        printf("%d is perfetct no\nbecuase the sum of its divisior is %d\n", n, sum);
    }
    else
    {
        printf("%d is not perfect no\nbecuase the sum of its divisior is %d\n", n, sum);
    }

    return 0;
}