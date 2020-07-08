// Distance between two points P(x1,y1) and Q(x2,y2) is given by: d(P, Q) = √ (x2 − x1)2 + (y2 − y1)2 {Distance formula} 2. Distance of a point P(x, y) from the origin is given by d(0,P) = √ x2 + y2. 3.

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float x1, y1, x2, y2;
//     double distance;
//     printf("Enter x1\n");
//     scanf("%f", &x1);
//     printf("Enter x2\n");
//     scanf("%f", &x2);
//     printf("Enter y1\n");
//     scanf("%f", &y1);
//     printf("Enter y1\n");
//     scanf("%f", &y2);
//     distance = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
//     printf("Distance=%f\n", distance);
//     return 0;
// }

#include <stdio.h>
#include <math.h>
int main()
{
    float x1, x2, y1, y2;
    double distance;
    printf("Enter x1\n");
    scanf("%f", &x1);
    printf("Enter x2\n");
    scanf("%f", &x2);
    printf("Enter y1\n");
    scanf("%f", &y1);
    printf("Enter y2\n");
    scanf("%f", &y2);
    distance = sqrt((pow((x1 - x2), 2)) + (pow((y1 - y2), 2)));
    printf("the distance between the points x1=%.2f, y1=%.2f, x2=%.2f, y2=%.2f is %.2f\n", x1, y1, x2, y2, distance);

    return 0;
}