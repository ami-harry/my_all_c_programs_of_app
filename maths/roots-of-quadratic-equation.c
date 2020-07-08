// In other words, the quadratic formula is simply just ax^2+bx+c = 0 in terms of x. So the roots of ax^2+bx+c = 0 would just be the quadratic equation, which is: (-b+-√b^2-4ac) / 2a.

// ax^2+bx+c=0
// a, b, c	=	known numbers, where a ≠ 0
// x	=	the unknown

// #include <stdio.h>
// #include <math.h>
// #include<stdlib.h>
// int main()
// {
//     float a, b, c, real, descriminant, imaginary, root1, root2;
//     printf("Enter the value for a b and c:\n");
//     scanf("%f%f%f", &a, &b, &c);
//     if (a == 0 || b == 0 || c == 0)
//     {
//         printf("Error! roots can't be zero\n");
//         exit(0);
//     }
//     else
//     {
//         descriminant = b * b - 4.0 * a * c; //d=b*b-4ac--->ax*x+bx+c=0;
//         if (descriminant < 0)
//         {
//             printf("Roots are imaginary\n");
//             real = -b * 2.0 * a;
//             imaginary = sqrt(abs(descriminant)) / 2.0 * a;
//             printf("Roots 1 = %2.2f+i%2.2f\n", real, imaginary);
//             printf("Roots 2 = %2.2f-i%2.2f\n", real, imaginary);
//         }
//         else if (descriminant == 0)
//         {
//             printf("Roots are real and equal\n");
//             root1 = -b / 2.0 * a;
//             root2 = root1;
//             printf("Root 1=%2.2f\n", root1);
//             printf("Roo2 1=%2.2f\n", root2);
//         }
//         else if (descriminant > 0)
//         {
//             printf("Roots are real and distinct\n");
//             root1 = -b + sqrt(abs(descriminant)) / 2.0 * a;
//             root2 = -b - sqrt(abs(descriminant)) / 2.0 * a;
//             printf("Root1=%2.2f\n", root1);
//             printf("Root2=%2.2f\n", root2);
//         }
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float f1, f2, f3, r1, r2, real, img, d;
    printf("Enter three roots\n");
    scanf("%f%f%f", &f1, &f2, &f3);
    if (f1 == 0 || f2 == 0 || f3 == 0)
    {
        printf("Error! roots cant be zero\n");
        exit(0);
    }
    else
    {
        d = f2 * f2 - 4.0 * f1 * f3;
        if (d < 0)
        {
            printf("Roots are imaginary becuase descriminant is %2.2f\n", d);
            real = -f2 / 2.0 * f1;
            img = sqrt(abs(d)) / 2.0 * f1;
            printf("Roots 1=%2.2f + i%2.2f\n", real, img);
            printf("Roots 2=%2.2f - i%2.2f\n", real, img);
        }
        else if (d > 0)
        {
            printf("Rooots are real and distinct becuase descriminant is %2.2f\n", d);
            r1 = -f2 + sqrt(abs(d)) / 2.0 * f1;
            r2 = -f2 - sqrt(abs(d)) / 2.0 * f1;
            printf("Root1 =%2.2f\n", r1);
            printf("Root2 =%2.2f\n", r2);
        }
        else if (d == 0)
        {
            printf("Roots are real and equal becuase descriminant is %2.2f\n", d);
            r1 = -f2 / 2.0 * f1;
            r2 = r1;
            printf("Root1 =%2.2f\n", r1);
            printf("Root2 =%2.2f\n", r2);
        }
    }

    return 0;
}