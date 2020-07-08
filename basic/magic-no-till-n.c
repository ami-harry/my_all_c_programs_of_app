// #include <math.h>
// int sum_of_digit(int);
// int rev_of_digit(int);
// int main()
// {
//     int num, sum, rev;
//     printf("Enter the number:\n");
//     scanf("%d", &num);
//     for (int i = 1; i <= num; i++)
//     {
//         sum = sum_of_digit(i);
//         rev = rev_of_digit(sum);

//         if (sum * rev == i)
//         {
//             printf("%d are magic no:\n", i);
//         }

//     }
//     return 0;
// }

// int sum_of_digit(int n)
// {
//     int sum = 0, x;
//     while (n > 0)
//     {
//         x = n % 10;
//         sum += x;
//         n /= 10;
//     }
//     return sum;
// }

// int rev_of_digit(int n)
// {
//     int rev = 0, x;
//     while (n > 0)
//     {
//         x = n % 10;
//         rev = rev * 10 + x;
//         n /= 10;
//     }
//     return rev;
// }

#include <stdio.h>
#include <math.h>
int sumofnum(int);
int revofnum(int);
int main()
{
    int num, sum_of_inp, rev_of_sum;
    printf("Enter the number:\n");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        sum_of_inp = sumofnum(i);
        rev_of_sum = revofnum(sum_of_inp);
        if (sum_of_inp * rev_of_sum == i)
        {
            printf("%d is magic no\n",i);
        }
    }

    return 0;
}

int sumofnum(int num)
{
    int sum = 0, x;
    while (num > 0)
    {
        x = num % 10;
        sum += x;
        num /= 10;
    }
    return sum;
}

int revofnum(int num)
{
    int rev = 0, x;
    while (num > 0)
    {
        x = num % 10;
        rev = rev * 10 + x;
        num /= 10;
    }
    return rev;
}