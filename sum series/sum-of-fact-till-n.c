
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n, i, j, fact = 1, sum = 0;
//     printf("Enter the limit of the factorial series\n");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             fact = fact * j;
//         }
//         sum = sum + fact;
//         fact = 1; // since new value of fact is not 1 thus reinitialize it back to 1
//     }
//     printf("The sum of the factorial series of % d terms is:  %d\n", n, sum);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
// int sum = 0, num, fact = 1, temp;
// printf("Enter the number\n");
// scanf("%d", &num);

// for (int i = 1; i <= num; i++)
// {
// for (int j = 1; j <= i; j++)
// {
// fact *= j;
// }
// printf("Factorial of %d is %d\n", i, fact);
// sum += fact;
// fact = 1;
// }
// printf("and the sum of factorial till %d is %d\n", num, sum);
// return 0;
// }

#include <stdio.h>
#include <math.h>
int main()
{
    int num, sum = 0, fact = 1;
    printf("Enter the number\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        printf("the factorial of %d is %d\n", i, fact);
        sum += fact;
        fact = 1;
    }
    printf("The sum of factorial till %d is %d\n", num, sum);

    return 0;
}