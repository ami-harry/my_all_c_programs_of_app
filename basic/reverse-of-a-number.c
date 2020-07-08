#include <stdio.h>
int main()
{
    int n, r, temp, rev = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    printf("The reverse of %d is %d\n", temp, rev);

    return 0;
}