
#include <stdio.h>
int main()
{
    int a, b, i, mul = 0;
    printf("Enter a and b:\n");
    scanf("%d %d", &a, &b);

    if (b < 0)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    if (a >= 0)
    {
        for (i = 1; i <= a; i++)
        {
            mul += b;
        }
    }
    if (a < 0)
    {
        for (i = a; i <= -1; i++)
        {
            mul -= b;
        }
    }
    printf("the multiplication is %d\n", mul);
    return 0;
}
