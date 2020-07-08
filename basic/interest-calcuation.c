#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int choice;
    float p = 0, r = 0, t = 0, si = 0, a = 0;
start:
    printf("Enter\n1 to find si\n2 for principal\n3 for time\n4 for rate\n5 for amount\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("you have opted to find simple interest\n");
        printf("enter principal in rupees\n");
        scanf("%f", &p);
        printf("Enter rate in percent\n");
        scanf("%f", &r);
        printf("Enter time in months\n");
        scanf("%f", &t);
        si = (float)(p * r * t) / 100.0;
        printf("simple interest= (principal * rate in percent* time in years)/ 100.0\n\n\n\n");
        printf("the simple interest = %2.2f percent \nwhere rate=%2.2f pecent\t principal=rs %2.2f  \t time=%2.2f years\n", si, r, p, t);
        printf("Enter 1 to use this program again or any key to exit\n");
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
        printf("you have selected to find principal\n");
        printf("Enter rate in percent\n");
        scanf("%f", &r);
        printf("Enter time in months\n");
        scanf("%f", &t);
        printf("Enter si in percent\n");
        scanf("%f", &si);
        p = (float)(100.0 * si) / (r * t);
        printf("principal= (100.0 * simple interest)/ (rate in percent* time in years\n\n\n\n");
        printf("The principal = rs %2.2f \nwhere rate= %2.2f percent\t time= %2.2f years\t simple interest= %2.2f percent\n", p, r, t, si);
        printf("Enter 1 to use this program again or any key to exit\n");
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
        printf("You have selected to find time\n");
        printf("Enter principal in rupees\n");
        scanf("%f", &p);
        printf("Enter rate in percent\n");
        scanf("%f", &r);
        printf("Enter simple interest in percent\n");
        scanf("%f", &si);
        t = (float)(100.0 * si) / (p * r);
        printf("time= (100.0 * simple interest)/ (rate in percent * principal\n\n\n\n");
        printf("the time = %2.2f years\nwhere principal= %2.2f percent\t rate= %2.2f in percent \t si= %2.2f in percent\n", t, p, r, si);
        printf("Enter 1 to use this program again or any key to exit\n");
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
    case 4:
        printf("You have selected to find rate\n");
        printf("Enter Principal in rupees\n");
        scanf("%f", &p);
        printf("Enter time in years(decimal)\n");
        scanf("%f", &t);
        printf("Enter simple interest\n");
        scanf("%f", &si);
        r = (float)(100.0 * si) / (p * t);
        printf("rate= (100.0 * simple interest)/ (time in years(decimal) * principal\n\n\n");
        printf("The rate = %2.2f percent \nwhere time= %2.2f years\tprincipal= rs-%2.2f \tsimple interest= %2.2f percent\n", r, t, p, si);
        printf("Enter 1 to use this program again or any key to exit\n");
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
        printf("You have opted to find amount\n");
        printf("Enter principal in rupees\n");
        scanf("%f", &p);
        printf("Enter rate in percent\n");
        scanf("%f", &r);
        printf("Enter time in years(in decimal)\n");
        scanf("%f", &t);
        a = (float)p * (1.0 + r * t); // r*t=i  we can write it as a=p+i also
        printf("amount= principal*(1+ rate in percent * time in years(decimal)) \n\n\n");
        printf("The amount = rs %2.2f\nwhere principal= %2.2f percent\trate= %2.2f percent\ttime= %2.2f years\n", a, p, r, t);
        printf("Enter 1 to use this program again or any key to exit\n");
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
        printf("Please! choose any valid option\n");
        printf("Enter 1 to use this program again or any key to exit\n");
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
bottom:
    printf("thanks for using the program\n");
    exit(0);
    return 0;
}