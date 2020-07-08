// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int size,zero_count = 0;
//     printf("Enter the size of the array:\n");
//     scanf("%d", &size);
//     int a[size];
//     printf("Enter 1 and zero only:\n");
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//         if (!(a[i] == 0 || a[i] == 1))
//         {
//             printf("Please enter 0 and 1 only\n");
//             exit(0);
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         if (a[i] == 0)
//         {
//             zero_count++;
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         if (i < zero_count)
//         {
//             a[i] = 0;
//         }
//         else
//         {
//             a[i] = 1;
//         }
//     }

//     for (int i = 0; i < size; i++)
//     {
//         printf("%d\n", a[i]);
//     }
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// int size, zero_count=0;
// printf("Enter the size of the array:\n");
// scanf("%d", &size);
// int a[size];
// printf("Enter the array elements\n");
// printf("Enter only 5 and 10 only:\n");
// for (int i = 0; i < size; i++)
// {
// scanf("%d", &a[i]);
// if (!(a[i] == 5 || a[i] == 10))
// {
// printf("Enter only 5 and 10 as an input:\n");
// exit(0);
// }
// }
// for (int i = 0; i < size; i++)
// {
// if (a[i] == 5)
// {
// zero_count++;
// }
// }
// for (int i = 0; i < size; i++)
// {
//
// if (i < zero_count)
// {
// a[i] = 5;
// }
// else
// {
// a[i] = 10;
// }
// }
//
// printf("the array elements are\n");
//
// for (int i = 0; i < size; i++)
// {
// printf("%d\n", a[i]);
// }
// printf("\n");
// return 0;
// // }

// 2nd way

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// int size, index = 0, left, right;
// printf("Enter the size of the array:\n");
// scanf("%d", &size);
// int a[size];
// printf("enter the elements of array:\n");
// for (int i = 0; i < size; i++)
// {
// scanf("%d", &a[i]);
// if (!(a[i] == 0 || a[i] == 1))
// {
// printf("Please! enter only 0 and 1 as input:\n");
// exit(0);
// }
// }
//
// left = 0;
// right = size - 1;
//
// while (left < right)
// {
// while (a[left] == 0 && a[right] == 1)
// {
// left++;
// }
// while (a[right] == 1 && a[left] == 0)
//
// {
// right--;
// }
//
// if (left < right)
// {
// a[left] = 0;
// a[right] = 1;
// left++;
// right--;
// }
// }
// printf("Array elements are:\n");
// for (int i = 0; i < size; i++)
// {
// printf("%d\n", a[i]);
// }
// printf("\n");
//
// return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// int size, left, right;
// printf("Enter the size of the array:\n");
// scanf("%d", &size);
// printf("enter the array elements:\n");
// int a[size];
// for (int i = 0; i < size; i++)
// {
// scanf("%d", &a[i]);
// if (!(a[i] == 0 || a[i] == 1))
// {
// printf("Please enter valid input as 0 and 1 only\n:");
// exit(0);
// }
// }
// left = 0;
// right = size - 1;
// while (left < right)
// {
// while ((a[left] == 0 && left < right))
// {
// left++;
// }
// while ((a[right] == 1 && left < right))
// {
// right--;
// }
// if (left < right)
// {
// a[left] = 0;
// a[right] = 1;
// left++;
// right--;
// }
// }
//
// printf("Array elements are:\n");
// for (int i = 0; i < size; i++)
// {
// printf("%d\n", a[i]);
// }
// printf("\n");
//
// return 0;
// // }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// int size, left, right;
// printf("Enter the size:\n");
// scanf("%d", &size);
// int a[size];
// printf("enter the array elements:\n");
// for (int i = 0; i < size; i++)
// {
// scanf("%d", &a[i]);
// if (!(a[i] == 0 || a[i] == 1))
// {
// printf("Please enter the correct input as only 0 and 1 only\n");
// exit(0);
// }
// }
//
// left = 0;
// right = size - 1;
// while (left < right)
// {
// while ((a[left] == 0 && left < right))
// {
// left++;
// }
// while ((a[right] == 1 && left < right))
// {
// right--;
// }
// if (left < right)
// {
// a[left] = 0;
// a[right] = 1;
// left++;
// right--;
// }
// }
//
// printf("Printing array elemnts\n");
// for (int i = 0; i < size; i++)
// {
// printf("%d\n", a[i]);
// }
// printf("\n");
// return 0;
// // }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// int size, left, right;
// printf("Enter the size of the array:\n");
// scanf("%d", &size);
// int a[size];
// printf("Enter the array elemnts:\n");
// for (int i = 0; i < size; i++)
// {
// scanf("%d", &a[i]);
//
// if (!(a[i] == 2 || a[i] == 4))
// {
// printf("please enter valid input:\n");
// exit(0);
// }
// }
// left = 0;
// right = size - 1;
// while (left < right)
// {
// while ((a[left] == 2 && left < right))
// {
// left++;
// }
// while ((a[right] == 4 && left < right))
// {
// right--;
// }
// if (left < right)
// {
// a[left] = 2;
// a[right] = 4;
// left++;
// right--;
// }
// }
//
// printf("printing array elements\n");
// for (int i = 0; i < size; i++)
// {
// printf("%d\n", a[i]);
// }
// printf("\n");
//
// return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// int size, count_zero = 0;
// printf("Enter the size of the array:\n");
// scanf("%d", &size);
// int a[size];
// printf("Enter the array elements\n");
// for (int i = 0; i < size; i++)
// {
// scanf("%d", &a[i]);
// if (!(a[i] == 2 || a[i] == 4))
// {
// printf("enter the correct input:");
// exit(0);
// }
// }
// for (int i = 0; i < size; i++)
// {
// if (a[i]==0)
// {
// count_zero++;
// }
//
// }
//
// for (int i = 0; i < size; i++)
// {
// if (i<count_zero)
// {
// a[i]=2;
// }
// else{
// a[i]=4;
// }
// }
//
//
// printf("printing array elements:\n");
// for (int i = 0; i < size; i++)
// {
// printf("%d\n", a[i]);
// }
// printf("\n");
//
// return 0;
// // }

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size, temp = 0;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    int a[size];
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
        if (!(a[i] == 0 || a[i] == 1))
        {
            printf("Enter only 0 and 1 as an input\n");
            exit(0);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[i] < a[j])//a[i]>a[j]
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("printing array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");

    return 0;
}