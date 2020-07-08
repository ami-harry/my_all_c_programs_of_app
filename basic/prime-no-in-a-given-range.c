#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number:\n");
    scanf("%d", &n);
    printf("Prime numbers upto %d are:\n",n);
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}