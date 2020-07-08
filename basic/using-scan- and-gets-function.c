// Some of the important points about scanf() and gets() are:

// scanf() and gets() both are used to take input from the user.
// scanf() can only take input until it encounters a space. The words after space are ignored by it.
// gets() is used to take a single input at a time but can be used to input a complete sentence with spaces unlike scanf().
// Below is a program on use of gets().

// gets() takes only a single line at a time i.e all the words before hitting \n(enter key).

#include<stdio.h>

int main()
{   
    char hk[15];
    printf("Hey, enter your full name:\n");
    // gets(hk); //https://www.knowprogram.com/c-programming/why-gets-function-is-dangerous-and-should-not-be-used/
    fgets(hk, sizeof(hk), stdin);
    printf("your full name is %s\n", hk);


    return 0;
}