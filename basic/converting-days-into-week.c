#include<stdio.h>
int main()
{
    int year, week, inp_days, days;
    printf("Enter the no of days:\n");
    scanf("%d", &inp_days);

    year=inp_days/365;    
    week=(inp_days%365)/7;
    days=(inp_days%365)%7;
   
    printf(" %d days means\n %d year %d weeks and %d days\n",inp_days, year,week, days);
    return 0;
}