// Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers. Let's try to understand why 153 is an Armstrong number. Let's try to understand why 371 is an Armstrong number


#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, temp, sum = 0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        i = n % 10;
        sum += i * i * i;
        n = n / 10;
    }

    if (temp == sum)
    {
        printf("%d is armstrong no\nbecuase the sum of square of digit is %d\n", temp,sum);
    }
    else
    {
        printf("%d is not armstrong no\nbecuase the sum of square of digit is %d\n", temp, sum);
    }

    return 0;
}