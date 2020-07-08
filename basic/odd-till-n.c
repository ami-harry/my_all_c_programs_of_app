// using while loop

// #include <stdio.h>
// int main()
// {
//     int n, i = 1;
//     printf("enter the number:\n");
//     scanf("%d", &n);

//     while (i <= n)
//     {
//         if (i % 2 == 1)

//             printf("%d\n", i);
//         i++;
//     }

//     return 0;
// }

// using for loop
#include<stdio.h>
int main()
{
    int n;
    printf("ente n:\n");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        if(i%2!=0)
        printf("%d\n",i);
        }
   return 0;
}