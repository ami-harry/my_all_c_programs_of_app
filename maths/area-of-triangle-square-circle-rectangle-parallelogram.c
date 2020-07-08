#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int choice;
    printf("Choose any one Option\n1 for triangle\n2 for square\n3 for circle\n4 for rectange\n5 for parallelogram\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {

        int a, b, c;
        float s, area;
        printf("Enter the side of the triangle\n");
        scanf("%d%d%d", &a, &b, &c);
        s = (float)(a + b + c) / 2;
        area = (float)sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The are of triangle of sides a=%d, b=%d andc=%d is %5.2f\n", a, b, c, area);
        break;
        exit(0);
    }
    case 2:
    {
        float side, area;
        printf("Enter the side of the square\n");
        scanf("%f", &side);
        area = (float)(side) * (side);
        printf("The area of the square having side = %5.2f and area is %5.2f\n", side, area);
        break;
        exit(0);
    }
    case 3:
    {
        float radius, area, pi = 3.14;
        printf("Enter the radius of the circle\n");
        scanf("%f", &radius);
        area = (float)(radius) * (radius)*pi;
        printf("the area of circle having radius = %5.2f and area is %5.2f\n", radius, area);
        break;
        exit(0);
    }
    case 4:
    {
        float length, breath, area;
        printf("Enter the lenght and breath of the ractangle\n");
        scanf("%f%f", &length, &breath);
        area = (float)(length) * (breath);
        printf("Area of rectangle having length = %5.2f and breath = %5.2f and area is %5.2f\n", length, breath, area);
        break;
        exit(0);
    }
    case 5:
    {
        float base, height, area;
        printf("Enter the base and height of the parallelogram\n");
        scanf("%f %f", &base, &height);
        area = (float)(base) * (height);
        printf("area of parallelogram having side = %5.2f and height = %5.2f and area is %f\n", base, height, area);
        break;
        exit(0);
    }
    default:
    {
        printf("Please choose the correct option\n");
        exit(0);
    }
    }
    return 0;
}
