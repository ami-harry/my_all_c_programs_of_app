// // A polynomial equation is an equation that has multiple terms made up of numbers and variables. ... The degree tells us how many roots can be found in a polynomial equation. For example, if the highest exponent is 3, then the equation has three roots. The roots of the polynomial equation are the values of x where y = 0.

// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// int main()
// {
//     int order = 0;
//     float x = 0, sum = 0;
//     printf("enter value of x\n");
//     scanf("%f", &x);
//     printf("Enter the order of polynomial\n");
//     scanf("%d", &order);
//     float coefficient[order];
//     for (int i = 0; i <= order; i++)
//     {
//         printf("Enter coefficient of polynomial at x^%d\n", i);
//         scanf("%f", &coefficient[i]);
//     }
//     for (int i = 0; i <= order; i++)
//     {
//         sum += coefficient[i] * pow(x, i);
//     }
//     for (int i = order; i >= 0; i--)
//     {
//         if (i > 0)
//             printf("%.2fx^%d+", coefficient[i], i);
//         else
//             printf("%.2fx^%d=", coefficient[i], i);
//     }
//     printf("%.2f\n", sum);

//     return 0;
// }

#include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
//
// int main()
// {
// int order;
// float x = 0, sum = 0;
// printf("Enter the order of equation\n");
// scanf("%d", &order);
// printf("Enter the value of x\n");
// scanf("%f", &x);
// float coefficient[order];
// for (int i = 0; i <= order; i++)
// {
// printf("Enter the coefficient of polynomial at x^%d\n", i);
// scanf("%f", &coefficient[i]);
// }
// for (int i = 0; i <= order; i++)
// {
// sum += coefficient[i] * pow(x, i);
// }
//
// for (int i = order; i >= 0; i--)
// {
// if (i > 0)
// {
// printf("%.2fx^%d+", coefficient[i], i);
// }
// else
// {
// printf("%.2fx^%d=", coefficient[i], i);
// }
// }
// printf("%.2f\n", sum);
// return 0;
// // }
//
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// int main()
// {
// int order = 0;
// float x = 0, sum = 0;
// printf("Enter the order\n");
// scanf("%d", &order);
// printf("Enter the value of x\n");
// scanf("%f", &x);
// float coefficient[order];
//
// for (int i = 0; i <= order; i++)
// {
// printf("enter the value for x^%d\n", i);
// scanf("%f", &coefficient[i]);
// }
// for (int i = 0; i <= order; i++)
// {
// sum += coefficient[i] * pow(x, i);
// }
// for (int i = order; i >= 0; i--)
// {
// if (i > 0)
// {
//
// printf("%.0fx^%d+", coefficient[i], i);
// }
//
// else
// {
// printf("%.0fx^%d=", coefficient[i], i);
// }
// }
// printf("%.2f\n", sum);
//
// return 0;
// }
