// // Below is a program on switch case with break.

// // switch() can only contain char and int.

// // break is used to exit from switch statement.

// // switch case can be without default case.

// // Another piece of information here is that a char variable is always initialized within ''(single quotes).

#include <stdio.h>
int main()
{
    char choice;
    char veg;
    printf("\t\t\t\tWelcome to our hotel\n\n");
    printf("Enter A for vegeterian items \nEnter B for Non-veg items\n");
    scanf("%c", &choice);
    printf("\t\tYour choice is %c\n\n", choice);

    switch (choice)
    {
    case 'A':

        printf("You have chosen Vegeterian category food items\n\n");
        printf("Choose C for Bihari Specal\nD for SOuth Indian\n");
        printf("Choose what you would like to have\n");
        scanf("%c", &veg);

        switch (veg)

        {
        case 'C':
            printf("You have choosen Bihari dish\n");
            break;
        case 'D':
            printf("You have choosen South Indian dish\n");
            break;
        default:
            printf("enter the right choice");
        }
        break;

    case 'B':
        printf("You have choosen Non-vegeterian category items\n\n");
        break;
    default:
        printf("Invalid choice\n  Please choose the correct option\n\n");
    }
    printf("Thanks for visiting us :) \n");
    return 0;
}