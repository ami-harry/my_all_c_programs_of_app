// Triangles! Patterns of right triangles. All triangles have 3 angles that add to 180 degrees. Therefore, if one angle is 90 degrees we can figure out Sin Theta = Cos (90 - Theta) and Cos Theta = Sin (90 - Theta).
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float cos_angle_a, cos_angle_b, cos_angle_c, sin_angle_a, sin_angle_b, sin_angle_c, tan_angle_a, tan_angle_b, tan_angle_c;
    const double PI = 3.1415;
    printf("Enter side a\n");
    scanf("%d", &a);
    printf("Enter side b\n");
    scanf("%d", &b);
    printf("Enter side c\n");
    scanf("%d", &c);
    cos_angle_a = acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c));
    cos_angle_b = acos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c));
    cos_angle_c = acos((pow(a, 2) + pow(c, 2) - pow(c, 2)) / (2 * b * a));
    cos_angle_a *= 180 / PI;
    cos_angle_b *= 180 / PI;
    cos_angle_c *= 180 / PI;
    printf("The sides are a=%d, b=%d, c=%d\n", a, b, c);
    printf("The cos angle of a is %lf\n", cos_angle_a);
    printf("The cos angle of b is %lf\n", cos_angle_b);
    printf("The cos angle of c is %lf\n", cos_angle_c);

    printf("printing sin theeta values for sides a%d b=%d and c=%d\n\n", a, b, c);
    sin_angle_a = (float)sqrt((90 - cos_angle_a));
    sin_angle_b = (float)sqrt((90 - cos_angle_b));
    sin_angle_c = (float)sqrt((90 - cos_angle_c));

    printf("The sine angle of a is %lf\n", sin_angle_a);
    printf("The sine angle of b is %lf\n", sin_angle_b);
    printf("The sine angle of c is %lf\n", sin_angle_c);

    printf("printing tan theeta values for sides a=%d b=%d and c=%d\n", a, b, c);
    tan_angle_a = (float)(sin_angle_a / cos_angle_a);
    tan_angle_b = (float)(sin_angle_b / cos_angle_b);
    tan_angle_c = (float)(sin_angle_c / cos_angle_c);

    printf("The tan angle of a is %lf\n", tan_angle_a);
    printf("The tan angle of b is %lf\n", tan_angle_b);
    printf("The tan angle of c is %lf\n", tan_angle_c);

    return 0;
}
