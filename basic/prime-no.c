#include <stdio.h>
int main()
{
    int n, i, count = 0;
    printf("Enter the Number to check it is prime or not:\n");
    scanf("%d", &n);
    //
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    //
    if (count == 2)
    {
        printf("The given no %d is Prime no\nbecuase it is only divisible by\n", n);
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                printf("%d\n", i);
            }
        }
    }
    else
    {
        printf("The given no %d is not Prime no\nbecuase it is divisible by\n", n);
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                printf("%d\n", i);
            }
        }
    }
    
    return 0;
}

/*

#include <stdio.h>
int main()
{
    int n, count = 0, i;
    printf("Enter the Number\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("The given no %d is prime\nbecuse it is only divisible by\n", n);
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                printf("%d\n", i);
            }
        }
    }
    else
    {
        printf("The given  no %d is not prime\n becuase it is divisible by \n", n);
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
*/