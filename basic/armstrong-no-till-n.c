#include <stdio.h>
int main()
{
    int n, i, j, temp1, temp2, sum = 0;
    printf("Enter the Range:\n");
    scanf("%d", &n);
    printf("Armstrong no upto %d are\n",n);
    for (i = 1; i <=n; i++)
    {
        sum=0;
        temp1=i;
        temp2=i;

        while (temp1>0)
        {
            j=temp1%10;
            sum+=j*j*j;
            temp1=temp1/10;
        }
        if (sum==temp2)
        {
            printf("%d\n",sum);
        }
        
    }
    
    return 0;
}