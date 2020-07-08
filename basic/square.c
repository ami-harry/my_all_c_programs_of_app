#include<stdio.h>
int main()
{
    int n, sq,cb;
    printf("enter the n:\n");
    scanf("%d", &n);
    sq=n*n;
    cb=n*n*n;
    printf("the square of the num is : %d\n", sq);
    // printf("the square of the num is : %d\n", n*n); //another way to find square
    printf("the cube of the num is : %d\n", cb);
    // printf("the cube of the num is : %d\n", n*n*n); //anther way to find cube
 
   return 0;
}