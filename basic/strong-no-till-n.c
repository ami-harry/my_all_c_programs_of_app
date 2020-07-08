// #include <stdio.h>
// #include <math.h>
// int fact(int);
// int main()
// {
//     int n, temp1, temp2, sum = 0, rem;
//     printf("Enter the Range\n");
//     scanf("%d", &n);
//     printf("Strong numbers till %d are:\n", n);
//     for (int i = 1; i <= n; i++)
//     {
//         sum = 0;
//         temp1 = i;
//         temp2 = i;
//         while (temp1 > 0)
//         {
//             rem = temp1 % 10;
//             sum += fact(rem);
//             temp1 /= 10;
//         }
//         if (sum == temp2)
//         {
//             printf("%d\n", sum);
//         }
//     }
//     return 0;
// }

// int fact(int num)
// {
//     int factorial=1;
//     for (int i = 1; i <= num; i++)
//     {
//         factorial *= i;
//     }
//     return factorial;
// }

#include <stdio.h>
#include <math.h>
int fact(int);
int main()
{
    int n, rem, sum = 0, temp1, temp2;
    printf("Emter the range:\n");
    scanf("%d", &n);
    printf("Strong no till %d are:\n", n);
    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        temp1 = i;
        temp2 = i;
        while (temp1 > 0)
        {
            rem = temp1%10;
            sum += fact(rem);
            temp1 /= 10;
        }
        if (sum == temp2)
        {
            printf("%d\n", sum);
        }
    }

    return 0;
}

int fact(int num)
{
    int factorial=1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}