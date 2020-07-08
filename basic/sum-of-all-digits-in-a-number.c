#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("Enter the number:\n");
    scanf("%d", &n);
    temp=n;
    while (n > 0)
    {
        r = n % 10;
        sum += r;
        n = n / 10;
    }
    printf("the sum of %d is %d\n", temp, sum);
    return 0;
}