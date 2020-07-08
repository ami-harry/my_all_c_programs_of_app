#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float si = 0, principal = 0, time = 0, rate = 0, amount = 0, amount1 = 0, si1 = 0;
    printf("\t\t\tWelcome ,, enter the required values to find simple interest\n");
    printf("Ente the principal in rupees\n");
    scanf("%f", &principal);
    printf("Ente the rate in percent\n");
    scanf("%f", &rate);
    printf("Ente the time in years(in decimal)\n");
    scanf("%f", &time);
    si = (float)(principal * rate * time) / 100.0;
    printf("simple interst= principal * rate * time/ 100\n\n");
    printf("the simple interest = %2.2f percent\nwhere\nprincipal=%2.2f rupees\nrate=%2.2f percent\ntime=%2.2f years\n\n", si, principal, rate, time);
    // amount=(float)principal*(1+rate*time);
    // we know that p*r*t =si;
    si1 = (float)principal * rate * time;
    amount1 = (float)principal + si1;
    // si1 is calculated on the basis of prt;
    amount = (float)principal * (1 + rate * time);
    
    printf("\namount1 calculated using si1=%2.2f (mera formulla) \n{si1 = (float)principal * rate * time} \t\t{amount1 = (float)principal + si1}\n\n", amount1);

    printf("\namount2 calculated using p(1+rt)=%2.2f(normal formulla) \n{ amount = (float)principal * (1 + rate * time)}\n\n", amount);
    return 0;
}