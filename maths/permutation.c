// If the order doesn't matter then we have a combination, if the order do matter then we have a permutation. ... The number of permutations of n objects taken r at a time is determined by the following formula: P(n,r)=n! (n−r)!

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// int factorial(int n);
//
// int main()
// {
//
// int n, r;
// float nPr;
// printf("Enter n for nPr in permutation\n");
// scanf("%d", &n);
// printf("Enter r for nPr in permutation\n");
// scanf("%d", &r);
// if (n >= r && n >= 0 && r >= 0)
// {
// nPr = (float)factorial(n) / factorial(n - r);
// printf("value of %dP%d is %.2f\n", n, r, nPr);
// }
// else
// {
// printf("Error, invalid input\n");
// exit(0);
// }
//
// return 0;
// }
//
// int factorial(int n)
// {
// int fact = 1;
// for (int i = 1; i <= n; i++)
// {
// fact *= i;
// }
// return fact;
// }
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int fact(int num);

int main()

{
    int n, r;
    float nPr;
    printf("Enter n in nPr\n");
    scanf("%d", &n);
    printf("Enter r in nPr\n");
    scanf("%d", &r);
    if (n >= r && n >= 0 && r >= 0)
    {
        nPr = (float)fact(n) / fact(n - r);
        printf("The value of %dP%d = %.2f\n", n, r, nPr);
    }
    else
    {
        printf("Invalid input\n");
        exit(0);
    }

    return 0;
}

int fact(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)

    {
        fact *= i;
    }
    return fact;
}