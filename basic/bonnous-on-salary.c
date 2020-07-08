// question
// A company decides to give bonus to all its employee on new year. A 5% bnus on salary is given to male workers and 10% bonus on salary is given to female workers. Write a C program to enter the salary and gender of the employees. if the salary of the employee is less than 10000, then the salary employee gets an extra 2% bonus on salary. Calculate the bonus that has to be given to the employee and display the salary that the employee will get?

#include <stdio.h>
#include <string.h>

int main()
{
    float salary, bonus;
    char gender;
    printf("Enter M for male and F for female\n");
    scanf("%c", &gender);

    printf("Enter your salary\n");
    scanf("%f", &salary);
    if (gender == 'M' || gender == 'm')
    {
        if (salary >= 10000)
        {
            bonus = (float)(salary * 0.05);
        }
        else
        {
            bonus = (float)(salary * 0.07);
        }
    }

    if (gender == 'F' || gender == 'f')
    {
        if (salary >= 10000)
        {
            bonus = (float)(salary * 0.10);
        }
        else
        {
            bonus = (float)(salary * 0.12);
        }
    }
    printf("Your original salary was %f\n", salary);
    printf("Your bonus will be %f\n", bonus);
    salary += bonus;
    printf("\nAfter conditions \nYour  salary is = %f \nwith  bonus  %f", salary, bonus);
    return 0;
}