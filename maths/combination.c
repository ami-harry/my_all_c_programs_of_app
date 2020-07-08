// Combinations are a way to calculate the total outcomes of an event where order of the outcomes does not matter. To calculate combinations, we will use the formula nCr = n! / r! * (n - r)!, where n represents the total number of items, and r represents the number of items being chosen at a time.

// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// int factorial(int num);
// int main()
// {
// int n, r;
// float nCr;
// printf("Enter n in nCr\n");
// scanf("%d", &n);
// printf("Enter r in nCr\n");
// scanf("%d", &r);
// if (n >= r && n >= 0 && r >= 0)
// {
// nCr = (float)factorial(n) / (factorial(r) * factorial(n - r));
// printf("The value of %dC%d = %.2f\n", n, r, nCr);
// }
// else
// {
// printf("Error! please enter a valid input\n");
// exit(0);
// }
//
// return 0;
// }
//
// int factorial(int num)
// {
// int fact = 1;
// for (int i = 1; i <= num; i++)
// {
// fact *= i;
// }
// return fact;
// // }

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int factorial(int fac);
int main()
{
    int n=0, r=0;
    float nCr=0;
    printf("Enter n in nCr\n");
    scanf("%d", &n);
    printf("Enter r in nCr\n");
    scanf("%d", &r);
    if (n >= r && n >= 0 && r >= 0)
    {
        nCr = (float)factorial(n) / (factorial(r) * factorial(n - r));
        printf("the value of %dC%d is %.2f\n", n, r, nCr);
    }
    else
    {
        printf("Enter valid input\n");
        exit(0);
    }

    return 0;
}

int factorial(int fac)
{
    int fact = 1;
    for (int i = 1; i <= fac; i++)
    {
        fact *= i;
    }
    return fact;
}