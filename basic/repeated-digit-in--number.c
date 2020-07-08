// #include <stdio.h>
// int main()
// {
// int n, i, k, rep[9], temp, flag = 0;
// printf("Enter the number:\n");
// scanf("%d", &n);
// temp = n;
// for (i = 0; i < 10; i++)
// {
// rep[i] = 0;
// }
// while (n > 0)
// {
// k = n % 10;
// rep[k]++;
// n /= 10;
// }
// for (i = 0; i < 10; i++)
// {
// if (rep[i] > 1)
// {
// flag = 1;
// printf("in %d the %d --> repeated %d times:\n", temp, i, rep[i]);
// }
// }
// if (flag == 0)
// {
// printf("No repeated digits:\n");
// }
//
// return 0;
// }
//
//

#include <stdio.h>
int main()
{
    int n, r, rep[9], count = 0, temp;
    printf("Enter a numbers:\n");
    scanf("%d", &n);
    temp = n;
    for (int i = 0; i <= 9; i++)
    {

        rep[i] = 0;
    }
    while (n > 0)
    {
        r = n % 10;
        rep[r]++;
        n /= 10;
    }
    for (int i = 0; i <= 9; i++)
    {
        if (rep[i] > 1)
        {
            count = 1;
            printf("%d repeated %d times:\n", i, rep[i]);
        }
    }
    if (count == 0)
    {
        printf("Noting is repated\n");
    }

    return 0;
}