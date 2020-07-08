// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int size, one_count = 0, index = 0;
//     printf("Enter the size of the array:\n");
//     scanf("%d", &size);
//     int a[size];
//     printf("Enter the array elements:\n");
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//         if (!(a[i] == 0 || a[i] == 1))
//         {
//             printf("Please enter valid input as 0 and 1 only:\n");
//             exit(0);
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         if (a[i] == 1)
//         {
//             one_count++;
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         if (i < one_count)
//         {
//             a[i] = 1;
//         }
//         else
//         {
//             a[i] = 0;
//         }
//     }

//     printf("array elemets are:\n");
//     for (int i = 0; i < size; i++)
//     {
//         printf("At index no %d value is %d\n", index, a[i]);
//         index++;
//     }
//     printf("\n");
//     return 0;
// }

// 2nd way
//
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// int size, left, right;
// printf("Enter the size of the array:\n");
// scanf("%d", &size);
// int a[size];
// printf("enter the array elements:\n");
// for (int i = 0; i < size; i++)
// {
// scanf("%d", &a[i]);
// if (!(a[i] == 0 || a[i] == 1))
// {
// printf("Please enter the right input \n");
// exit(0);
// }
// }
//
// left = 0;
// right = size - 1;
// while (left < right)
// {
// while ((a[left] == 1 && left < right))
// {
// left++;
// }
// while ((a[right] == 0 && left < right))
// {
// right--;
// }
// if (left < right)
// {
// a[left] = 1;
// a[right] = 0;
// left++;
// right--;
// }
// }
//
// printf("Printing array elemets:\n");
// for (int i = 0; i < size; i++)
// {
// printf("%d\n", a[i]);
// }
// printf("\n");
// return 0;
// }

// third way
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size, temp = 0;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    int a[size];

    printf("Enter the array elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);

        if (!(a[i] == 2 || a[i] == 3))
        {
            printf("Invalid input");
            exit(0);
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("array elements are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");

    return 0;
}