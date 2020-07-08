// Steps to Check Magic Number in C
// Copy the value of sumOfDigits into temp. Using while loop on temp, compute reverse of temp (i.e of sumOfDigits) and store it in rev. Check if rev == sumOfDigits. If Yes, then the given number is Magic number else not.

// #include <stdio.h>
// #include <math.h>
// int sum_of_digit(int);
// int rev_of_digit(int);
// int main()
// {
// int num, sum, rev,temp;
// printf("Enter the number:\n");
// scanf("%d", &num);
// temp=num;
// sum = sum_of_digit(num);
// rev = rev_of_digit(sum);
// while (num>0)
// {
// if (sum*rev==num)
// {
// printf("%d is Magic no \n%d is sum and %d is rev\n", temp,sum,rev);
//
// }
// else
// {
//
// printf("%d not a magic no\n %d is sum and %d is rev\n", temp, sum, rev);
// }
// }
// return 0;
// }
//
// int sum_of_digit(int n)
// {
// int sum = 0, x;
// while (n > 0)
// {
// x = n % 10;
// sum += x;
// n /= 10;
// }
// return sum;
// }
//
// int rev_of_digit(int n)
// {
// int rev = 0, x;
// while (n > 0)
// {
// x = n % 10;
// rev = rev * 10 + x;
// n /= 10;
// }
// return rev;
// // }

//

