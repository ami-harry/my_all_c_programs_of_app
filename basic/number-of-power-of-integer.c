// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int num, pow, temp;
// start:
//     printf("Enter the number:\n");
//     scanf("%d", &num);
//     printf("Enter the power:\n");
//     scanf("%d", &pow);
//     temp = num;
//     if (num == 0 || num == 1)
//     {
//         printf("Please enter any number other than 0 and 1\n");
//         goto start;
//     }
//     while (num > 1)
//     {
//         printf("behind the process %d /= %d\n", num, pow);
//         if (num % pow != 0)
//         {
//             printf("%d /= %d\n", num, pow);
//             printf("Given no %d is not the power of the %d\n", temp, pow);
//             exit(0);
//         }
//         num = num / pow;
//     }
//     printf("given no %d is the power of the %d\n", temp, pow);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, pow, temp;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Enter the power\n");
    scanf("%d", &pow);
    temp = num;
    if (num == 0 || num == 1)
    {
        printf("Please enter other than 0 and 1\n");
        exit(0);
    }
    while (num > 1)
    {
        printf("%d / %d \n", num, pow);
        if (num % pow != 0)
        {
            printf("%d / %d\n ", num, pow);
            printf("Given no %d is not the power of %d\n", temp, pow);
            exit(0);
        }
        num = num / pow;
    }
    printf("given no %d is the power of %d\n", temp, pow);
    return 0;
}