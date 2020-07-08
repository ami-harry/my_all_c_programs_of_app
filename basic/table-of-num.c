#include<stdio.h>
int main()
{   
    int n,mul;
    printf("enter the number:\n");
    scanf("%d", &n);
    for(int i=1; i<=10; i++){
        mul=n*i;
        printf("%d * %d = %d", n, i,mul);
        printf("\n");
    }
 
   return 0;
}