// A number is called strong number if sum of the factorial of its digit is equal to number itself. For example: 145 as 1! + 4! + 5! = 1 + 24 + 120 = 145.

// factorial ka sum agr number ke equal ho gya to strong no hai

#include <stdio.h>
#include <math.h>
int factorial(int);
int main()
{
    int n, sum = 0, temp, rem;
    printf("Enter a nuber:\n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum += factorial(rem);
        n /= 10;
    }
    if(sum==temp){
        printf("%d is strong no and sum is also %d\n", temp, sum);
    }
    else
    {
        printf("%d is not strong no becuase sum is %d\n", temp, sum);
    }
    
    return 0;
}

int factorial(int number)
{
    int fact = 1;
    for (int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    return fact;
}
