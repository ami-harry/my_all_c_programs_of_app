// An arithmetic progression is a sequence of numbers such that the difference of any two successive members is a constant. For example, the sequence 1, 2, 3, 4, ... is an arithmetic progression with common difference 1. Second example: the sequence 3, 5, 7, 9, 11,... is an arithmetic progression.

// a_{n}=a_{1}+(n-1)d
// a_n	=	the nᵗʰ term in the sequence
// a_1	=	the first term in the sequence
// d	=	the common difference between terms

#include <stdio.h>
#include <math.h>
int main()
{
    int total_term, sum = 0, num1, num2, diff, lastNum, series;
    printf("Enter the first element\n");
    scanf("%d", &num1);
    printf("Enter the second element\n");
    scanf("%d", &num2);
    printf("Enter the last element\n");
    scanf("%d", &lastNum);
    diff = num2 - num1;
    series = num1;

    total_term = ((lastNum - num1) / diff) + 1;
    printf("The total no of terms in series is %d\n", total_term);

    for (int i = 1; i <= total_term; i++)
    {
        sum += series;
        series += diff;
    }

    series = num1;
    printf("sum of the series is \n");
    for (int i = 1; i <= total_term; i++)
    {
        if (i < total_term)
        {
            printf("%d+\n", series);
            series += diff;
        }
        else
        {
            printf("%d=%d\n", series, sum);
            series += diff;
        }
    }
    // printf("%d\n", sum);

    return 0;
}