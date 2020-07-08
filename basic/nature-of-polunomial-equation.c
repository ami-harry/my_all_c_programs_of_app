
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int order = 0;
    float x = 0, sum = 0;
    printf("Enter the order of polynomial\n");
    scanf("%d", &order);
    printf("Enter the value of x\n");
    scanf("%f", &x);
    float coefficient[order];
    for (int i = 0; i <= order; i++)
    {
        printf("Enter the value of polynomial equation at x^%d\n", i);
        scanf("%f", &coefficient[i]);
    }

    for (int i = 0; i <= order; i++)
    {
        sum += coefficient[i] * pow(x, i);
    }

    for (int i = order; i >= 0; i--)
    {
        if (i > 0)
        {
            printf("%.0fx^%d+", coefficient[i], i);
        }
        else
        {

            printf("%.0fx^%d=", coefficient[i], i);
        }
    }
    printf("%.0f\n", sum);
    printf("Printing nature of the equation\n");
    if (order == 1)
    {
        printf("Nature of the equation is linear equation becuase  it has order of %d \n", order);
    }
    else if (order == 2)
    {
        printf("Nature of the equation is quadratic equation becuase  it has order of %d \n", order);
    }
    else if (order == 3)
    {
        printf("Nature of the equation is cubic equation becuase  it has order of %d \n", order);
    }
    else
    {
        printf("this is polynomial eqation of %d order\n", order);
    }

    return 0;
}
