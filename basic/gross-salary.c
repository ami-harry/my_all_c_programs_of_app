// calculating gross salary by basic pay
// basic pay    dearnessAllowance   houseRentAllowance  grossSalary     providentFound

#include <stdio.h>
int main()
{
    float basicPay, dearnessAllowance, houseRentAllowance, grossSalary, providentFound;
    printf("Enter basic pay\n");
    scanf("%f", &basicPay);
    dearnessAllowance = 0.4 * basicPay;
    houseRentAllowance = 0.2 * basicPay;
    providentFound = .12 * basicPay;
    grossSalary = basicPay + houseRentAllowance + dearnessAllowance;
    +providentFound;
    printf("Your basic pay scale is %.2f:\n", basicPay);
    printf("Your dearnessAllowance scale is %.2f:\n", dearnessAllowance);
    printf("Your houseRentAllowance scale is %.2f:\n", houseRentAllowance);
    printf("Your ProvidentFound scale is %.2f:\n", providentFound);
    printf("Your Gross salary is %.2f:\n", grossSalary);
    return 0;
}
