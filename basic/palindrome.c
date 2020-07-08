// palindrome mtlb ulta sidha ek saman
#include <stdio.h>
int main()
{
    int n, r, rev = 0, pal;
    printf("Enter the number:\n");
    scanf("%d", &n);
    pal=n;
    while (n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if(pal==rev){
        printf("%d is palindrome\n", rev);
    }
    else
    {
        printf("%d is not palindrome\n",rev);
    }
    
    return 0;
}