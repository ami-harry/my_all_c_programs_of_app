#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the  number\n");
    scanf("%d", &n);
    printf("Perfect numbers from 1 to %d are:\n",n);
    for (int i = 1; i <=n; i++)
    {
        sum=0;
        for (int j = 1;j <i;  j++)
        {
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i){
            printf("%d\n",i);
        }
    }
    
    return 0;
}