// first quadrant (x +ve and y +ve)
// second quadrant (x -ve and y +ve)
// third quadrant (x -ve and - ve)
// fourth quadrant (x + ve and y -ve)

// The axes of a two-dimensional Cartesian system divide the plane into four infinite regions, called quadrants, each bounded by two half-axes. These are often numbered from 1st to 4th and denoted by Roman numerals: I (where the signs of the (x; y) coordinates are I (+; +), II (−; +), III (−; −), and IV (+; −).

#include <stdio.h>
int main()
{
    float x, y;
    printf("Enter first co-ordinate\n");
    scanf("%f", &x);
    printf("Enter second co-ordinate\n");
    scanf("%f", &y);
    if (x > 0 && y > 0)
    {
        printf("Co-ordinates (%f%f) lies in first quadrant\n", x, y);
    }
    if (x < 0 && y > 0)
    {
        printf("Co-ordinates (%f%f) lies in second quadrant\n", x, y);
    }
    if (x < 0 && y < 0)
    {
        printf("Co-ordinates (%f%f) lies in Third quadrant\n", x, y);
    }
    if (x > 0 && y < 0)
    {
        printf("Co-ordinates (%f%f) lies in fourth  quadrant\n", x, y);
    }
    if (x == 0 && y == 0)
    {
        printf("Co-ordinates (%f%f) lies at the Cenetr\n", x, y);
    }
    
    return 0;
}