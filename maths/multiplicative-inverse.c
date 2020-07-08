// In mathematics, a multiplicative inverse or reciprocal for a number x, denoted by 1/x or x−1, is a number which when multiplied by x yields the multiplicative identity, 1. The multiplicative inverse of a fraction a/b is b/a. For the multiplicative inverse of a real number, divide 1 by the number.

// we obtain multiplicative inverse by substituting values in I so that the least integer when substotited in place of I(like 1,2,3,4..) the answer should be an interger.
// for ex--> mi=27/7 which is not integer
// mi= ((2*26)+1) = 53/7 not a integer
// mi=((3*26)+1)=79/7 is not interger
// mi=((4*26)+1)=105/7 =15 is an interger integer.

// #include <stdio.h>
// #include <math.h>
// int main()
// {
// int MI, num;
// printf("Enter the number\n");
// scanf("%d", &num);
// for (int i = 1; i <= num; i++)
// {
// MI = ((i * 26) + 1);
// if (MI % num == 0)
// {
// break;
// }
// }
// MI /= num;
// printf("The multipicative inverse of %d is %d\n", num, MI);
// return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num, mi;
    printf("Enter the number\n");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        mi = ((i * 26) + 1);
        if (mi % num == 0)
        {
            break;
        }
    }
    mi /= num;
    printf("The multiplicative inverse of %d is %d\n", num, mi);
    return 0;
}