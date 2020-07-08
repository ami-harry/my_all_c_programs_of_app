#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter four numbers  \ta,b,c,d respectively:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if ((a > b) && (a > c) && (a > d))
    {
        printf("a=%d is greater\n", a);
    }
    else if ((b > a) && (b > c) && (b > d))
    {
        printf("b=%d is greater\n", b);
    }
    else if ((c > a) && (c > d) && (c > d))

    {
        printf("c=%d is greater\n", c);
    }
    else if ((a == b) && (a == c) && (a == d) &&( b == c) && (b == d) && (c == d))
    {
        printf("all numbers are equal a=%d b=%d c=%d d=%d\n", a, b, c, d);
    }

    else
    {
        printf("d=%d is greater\n", d);
    }
    return 0;
}