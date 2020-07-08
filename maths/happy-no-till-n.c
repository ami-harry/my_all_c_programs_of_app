// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int num, sum = 0, temp, rem, happy;
//     printf("Enter the number:\n");
//     scanf("%d", &happy);

//     printf("Happy numbers are\n");
//     for (int i = 1; i <= happy; i++)
//     {
//         sum = 0;
//         num = i;
//         temp = num;
//         while (sum != 1 && sum != 4)
//         {
//             sum = 0;
//             while (num > 0)
//             {
//                 rem = num % 10;
//                 sum += (rem * rem);
//                 num /= 10;
//             }

//             num = sum;
//         }
//         if (sum == 1)
//         {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
// int sum = 0, happy, num, temp, rem;
// printf("Enter till you want to see happy numbers\n");
// scanf("%d", &happy);
// printf("happy numbers are\n");
// for (int i = 1; i <= happy; i++)
// {
// sum = 0;
// num = i;
// temp = num;
// while (sum != 1 && sum != 4)
// {
// sum = 0;
// while (num > 0)
// {
//
// rem = num % 10;
// sum += rem * rem;
// num /= 10;
// }
// num = sum;
// }
// if (sum == 1)
// {
// printf("%d\n", i);
// }
// }
//
// return 0;
// }



#include <stdio.h>
#include <math.h>
int main()
{
    int sum, num, limit, rem, temp;
    printf("Enter the limit till you want to see the happy number\n");
    scanf("%d", &limit);
    printf("Happy numbers are\n");
    for (int i = 1; i <= limit; i++)
    {
        sum = 0;
        num = i;
        temp = num;
        while (sum != 1 && sum != 4)
        {
            sum = 0;
            while (num > 0)
            {
                rem = num % 10;
                sum += rem * rem;
                num /= 10;
            }
            num = sum;
        }
        if (sum == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}