// // sum of series 1+1/2+1/3+1/4...
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n;
//     float sum = 0.0;
//     printf("Enter the value of n:\n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         // printf("%f\n", sum);
//         sum += (float)1 / i;
//     }
//     printf("The sum of \n");
//     for (int i = 1; i <= n; i++)
//     {
//     printf("%f\n", sum);
//         if (i < n)
//         {
//             printf("1/%d\n", i);
//         }
//         else
//         {
//             printf("1/%d\n", i);
//         }
//     }
//     printf("%f\n", sum);

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
// int n;
// float sum = 0.0;
// printf("Enter the limit till you want to see the sum:\n");
// scanf("%d", &n);
// for (int i = 1; i <= n; i++)
// {
// sum += (float)1 / i;
// }
// printf("the value of \n");
// for (int i = 1; i <= n; i++)
// {
// if (i < n)
// {
// printf("1/%d+", i);
// }
// else
// {
//
// printf("1/%d", i);
// }
// }
//
// printf("\n%.2f\n", sum);
// return 0;
// }

#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    float sum = 0.0;
    printf("Enter the number\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum += (float)1 / i;
    }
    printf("The value of:\n");
    for (int i = 1; i <= num; i++)
    {
        if (i < num)
        {
            printf("1/%d+", i);
        }
        else
        {

            printf("1/%d+", i);
        }
    }
    printf("0= %.2f\n", sum);
    return 0;
}