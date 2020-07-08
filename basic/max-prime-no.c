#include <stdio.h>
int main()
{
    int num, count, maxPrime = 0;
    printf("Enter the number:\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            if (maxPrime < i)
            {
                maxPrime = i;
            }
        }
    }
    printf("maximum prime number below %d are %d\n", num, maxPrime);
    //
    return 0;
}
//

// prime number till n are
// #include <stdio.h>
// int main()
// {
// int num, count;
// printf("Enter the number:\n");
// scanf("%d", &num);
// printf("Prime numbers between  %d are\n", num);
// for (int i = 1; i <= num; i++)
// {
// count = 0;
// for (int j = 1; j <= i; j++)
// {
// if (i % j == 0)
// {
// count++;
// }
// }
// if (count==2)
// {
// printf("%d \n", i);
// }
//
// }
//
// return 0;
// }