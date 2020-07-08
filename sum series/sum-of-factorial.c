// #include <stdio.h>
// #include <math.h>
// int factorial(int);
// int main()
// {
//     int num;
//     float sum = 0.0;
//     printf("Enter the number\n");
//     scanf("%d", &num);
//     for (int i = 1; i <= num; i++)
//     {
//         sum += (float)i / factorial(i);
//     }
//     printf("The values are\n");
//     for (int i = 1; i <= num; i++)
//     {
//         if (i < num)
//         {
//             printf("%d/%d!+", i, i);
//         }
//         else
//         {
//             printf("%d/%d!=", i, i);
//         }
//     }
//     printf("%f\n", sum);
//     return 0;
// }
// //
// int factorial(int num)
// {
//     int fact = 1;
//     for (int i = 1; i <= num; i++)
//     {
//         fact *= i;
//     }
//     return (fact);
// }

#include <stdio.h>
#include <math.h>
int fact(int);
int main()
{
    int i, no, sum=0;
    printf("Enter the number\n");
    scanf("%d", &no);
    for (int i = 1; i <= no; i++)
    {
        sum += i / fact(i);
    }
    printf("the value of \n");
    for (int i = 1; i <= no; i++)
    {
        if (i < no)
        {
            printf("%d/%d!+", i, i);
        }
        else
        {
            printf("%d/%d!=", i, i);
        }
    }
    printf("%d\n", sum);
    return 0;
}

int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
