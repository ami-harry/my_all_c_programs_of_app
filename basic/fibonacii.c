#include <stdio.h>
int main()
{
    int a = 0, b = 1, c, n, i = 2;
    printf("Enter the Range:\n");
    scanf("%d", &n);
    printf("The series is: \n");
    printf("%d\n%d\n", a, b);
    while (i < n)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d\n", c);
        i++;
    }

    return 0;
}