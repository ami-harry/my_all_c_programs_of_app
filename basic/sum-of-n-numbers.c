#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter till where you want to add:\n");
    scanf("%d", &n);
    for (int i = 0; i <=n; i++)
    {
        sum += i;
    }
    printf("the sum is %d\n", sum);
    return 0;
}