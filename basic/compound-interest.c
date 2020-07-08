// // A = P(1 + \frac{r}{n})^{nt}
// // A	=	final amount
// // P	=	initial principal balance
// // r	=	interest rate
// // n	=	number of times interest applied per time period
// // t	=	number of time periods elapsed
// // From the web
// // Compound interest is calculated by multiplying the initial principal amount by one plus the annual interest rate raised to the number of compound periods minus one. Interest can be compounded on any given frequency schedule, from continuous to daily to annually

// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// int main()
// {
//     float ci = 0, time = 0, rate = 0, principal = 0;
//     int n = 0; //n means no of time interest is compound
//     printf("Enter the principal\n");
//     scanf("%f", &principal);
//     printf("Enter the time\n");
//     scanf("%f", &time);
//     printf("Enter the rate\n");
//     scanf("%f", &rate);
//     printf("enter no of times interest if compound\n");
//     scanf("%d", &n);
//     // ci = (float)(principal * (pow((1 + (rate / (100.0 * n))), (n * time))));
//     ci = (float)(principal * (pow((1 + (rate / (100.0 * n))), (n * time))));

//     printf("the ci is %2.2f\n", ci);
//     return 0;

// }

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int n;
    float rate = 0, time = 0, principal = 0, amount = 0, ci = 0;
    printf("Enter the principal in rupees\n");
    scanf("%f", &principal);
    printf("Enter the rate in percent\n");
    scanf("%f", &rate);
    printf("Enter the time in years\n");
    scanf("%f", &time);
    printf("Enter how many time the interest will be compound interest(in months)\n");
    scanf("%d", &n);
    ci = (float)(principal * pow(1 + (rate / (100.0 * n)), (n * time)));
    printf("the compound interest = %2.2f rupess\nwhere principle=%2.2f rupees rate=%2.2f percent time=%2.2f years\n", ci, principal, rate, time);

    return 0;
}