// // // In number theory, a -happy number is a natural number in a given number base that eventually reaches 1 when iterated over the perfect digital invariant function for. Those numbers that do not end in 1 are -unhappy numbers. The origin of happy numbers is not clear

// Happy Number
// A number is called happy if it leads to 1 after a sequence of steps wherein each step number is replaced by the sum of squares of its digit that is if we start with Happy Number and keep replacing it with digits square sum, we reach 1.
// Examples :
//
// Input: n = 19
// Output: True
// 19 is Happy Number,
// 1^2 + 9^2 = 82
// 8^2 + 2^2 = 68
// 6^2 + 8^2 = 100
// 1^2 + 0^2 + 0^2 = 1
// As we reached to 1, 19 is a Happy Number.
//
// Input: n = 20
// Output: False
//
// #include <stdio.h>
// #include <math.h>
// int main()
// {
// int num, sq_sum = 0, rem, temp;
// printf("Enter the number\n");
// scanf("%d", &num);
// temp = num;
// while (sq_sum != 1 && sq_sum != 4)
// {
// sq_sum = 0;
// while (num > 0)
// {
// rem = num % 10;
// sq_sum += (rem * rem);
// num = num / 10;
// printf("%d is happy number becuase we have got %d \n",num, sq_sum);
// }
// num = sq_sum;
// }
// if (sq_sum == 1)
// {
// printf("\n\n%d is happy number becuase we have got %d \n", temp, sq_sum);
// }
// else
// {
// printf("\n\n%d is not a happy number becuse we have got %d\n", temp, sq_sum);
// }
//
// return 0;
// }
//

// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// int main()
// {
// int num, sum = 0, rem, temp;
// printf("Enter the number to check is it happy or not\n");
// scanf("%d", &num);
// temp = num;
// while (sum != 1)
// {
// sum = 0;
// while (num > 0)
// {
// rem = num % 10;
// sum += (rem * rem);
// num /= 10;
// }
// num = sum;
//
// if (sum == 1)
// {
// printf("%d is happy number becuase we got %d\n", temp, sum);
// }
// }
// if (sum == 1)
// {
//
// printf("%d is happy number becuase we got %d\n", temp, sum);
// }
// else
// {
// printf("%d is not happy number becuase we got %d\n", temp, sum);
// }
//
// return 0;
// // }
//
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// int main()
// {
// int num, sum = 0, rem, temp = 0;
// printf("Enter the number:\n");
// scanf("%d", &num);
// temp = num;
// while (sum != 1 && sum != 4)
// {
// sum = 0;
// while (num > 0)
// {
// rem = num % 10;
// sum += rem * rem;
// num /= 10;
// printf("process--> we got square of %d is %d and remainder is  %d\n",rem,sum,num);
// }
//
// num = sum;
// }
// if (sum == 1)
// {
// printf("\n\n%d is happy no becuase we got %d\n", temp, sum);
// }
// else
// {
//
// printf("\n\n%d is not happy no becuase we got %d\n", temp, sum);
// }
// }
//

#include <stdio.h>
#include <math.h>
int main()
{
    int num, sum, temp, rem;
    printf("Enter the no to check is it happy or not\n");
    scanf("%d", &num);
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
    if (sum == 0)
    {
        printf("%d is happy no becuase we got %d in last\n", temp, sum);
    }
    else
    {
        printf("%d is not happy no becuase we got %d in last\n", temp, sum);
    }

    return 0;
}
