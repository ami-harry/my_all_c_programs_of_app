#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int choice;
    float result = 0, num1, num2, PI = 3.14;
start:
    printf("\n\t\t\t\t\t Welcome to harry's calculator\n");
    printf("Enter what you want to do\n\nPress 1 for addition\n\nPress 2 for substraction\n\nPress 3 for division\n\nPress 4 for Multiplication\n\nPress 5 for square root\n\nPress 6 for cube of number\n\nPress 7 for square of the number\n\nPress 8 to find trignomertic values for given values\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("You have selected to perform addition\n");
        printf("enter two numbers\n");
        scanf("%f%f", &num1, &num2);
        result = num1 + num2;
        printf("The sum of %2.2f + %2.2f is %2.2f\n", num1, num2, result);
        printf("do you like to use calculator again\n");
        printf("Press 1 to start again or press any key to exit\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            goto start;
        }
        else
        {
            goto bottom;
        }

        break;
    case 2:
        printf("You have selected to perform substraction\n");
        printf("enter two numbers\n");
        scanf("%f%f", &num1, &num2);
        result = num1 - num2;
        printf("The substraction of %2.2f - %2.2f is %2.2f\n", num1, num2, result);
        printf("do you like to use calculator again\n");
        printf("Press 1 to start again or press any key to exit\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            goto start;
        }
        else
        {
            goto bottom;
        }

        break;

    case 3:
    div:
        printf("You have selected to perform division\n");
        printf("enter two numbers\n");
        scanf("%f%f", &num1, &num2);
        if (num2 == 0)
        {
            printf("denominator can't be zero\n ");
            goto div;
        }
        else
        {
            result = num1 / num2;
            printf("The division of %2.2f / %2.2f is %2.2f\n", num1, num2, result);
            printf("do you like to use calculator again\n");
            printf("Press 1 to start again or press any key to exit\n");
            scanf("%d", &choice);
            if (choice == 1)
            {
                goto start;
            }
            else
            {
                goto bottom;
            }
        }

        break;

    case 4:
        printf("You have selected to perform multiplication\n");
        printf("enter two numbers\n");
        scanf("%f%f", &num1, &num2);
        result = num1 * num2;
        printf("The multiplication of %2.2f * %2.2f is %2.2f\n", num1, num2, result);
        printf("do you like to use calculator again\n");
        printf("Press 1 to start again or press any key to exit\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            goto start;
        }
        else
        {
            goto bottom;
        }

        break;

    case 5:
        printf("You have selected to perform square-root\n");
        printf("enter the numbers\n");
        scanf("%f", &num1);
        result = sqrt(abs(num1));
        printf("The square-root of %2.2f is %2.2f\n", num1, result);
        printf("do you like to use calculator again\n");
        printf("Press 1 to start again or press any key to exit\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            goto start;
        }
        else
        {
            goto bottom;
        }

        break;

    case 6:
        printf("You have selected to find cube\n");
        printf("enter the numbers\n");
        scanf("%f", &num1);
        result = num1 * num1 * num1;
        printf("The cube of %2.2f is %2.2f\n", num1, result);
        printf("do you like to use calculator again\n");
        printf("Press 1 to start again or press any key to exit\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            goto start;
        }
        else
        {
            goto bottom;
        }

        break;
    case 7:
        printf("You have selected to find square\n");
        printf("enter the numbers\n");
        scanf("%f", &num1);
        result = num1 * num1;
        printf("The square of %2.2f is %2.2f\n", num1, result);
        printf("do you like to use calculator again\n");
        printf("Press 1 to start again or press any key to exit\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            goto start;
        }
        else
        {
            goto bottom;
        }

        break;
    case 8:
        printf("You have selected for trigonometric values\n");
        printf("Choose which trigonometric terms value do you want to know\n");
        printf("Press 1 for sin\nPress 2 for cos\nPress 3 for tan\n");
        printf("Press 4 for cosec\nPress 5 for sec\nPress 6 for cot\nPress 7 to see all values at a time\n");
        scanf("%d", &choice);
        printf("enter the value in degree\n");
        scanf("%f", &num1);
        result = (double)(num1) * (PI / 180.0);
        switch (choice)
        {
        case 1:
            printf("The sine(%f) is %f\n", num1, (double)sin(result));
            break;
        case 2:
            printf("The cosec(%f) is %f\n", num1, (double)cos(result));
            break;
        case 3:
            printf("The tan(%f) is %f\n", num1, (double)tan(result));
            break;
        case 4:
            printf("The cosec(%f) is %f\n", num1, (double)1 / sin(result));
            break;
        case 5:
            printf("The sec(%f) is %f\n", num1, (double)1 / cos(result));
            break;
        case 6:
            printf("The cot(%f) is %f\n", num1, (double)1 / tan(result));
            break;
        case 7:
            printf("The sine(%f) is %f\n", num1, (double)sin(result));
            printf("The cosec(%f) is %f\n", num1, (double)cos(result));
            printf("The tan(%f) is %f\n", num1, (double)tan(result));
            printf("The cosec(%f) is %f\n", num1, (double)1 / sin(result));
            printf("The sec(%f) is %f\n", num1, (double)1 / cos(result));
            printf("The cot(%f) is %f\n", num1, (double)1 / tan(result));

            break;

        default:
            printf("Invalid choice\n");
            goto bottom;
        }

        printf("do you like to use calculator again\n");
        printf("Press 1 to start again or press any key to exit\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            goto start;
        }
        else
        {
            goto bottom;
        }

        break;

    default:
        printf("Enter valid input\n");
        goto start;
    }
bottom:
    printf("Thanks for using my calculator\n");
    exit(0);
    return 0;
}