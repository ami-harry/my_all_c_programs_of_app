#include<stdio.h>
int main()
{
    int age;
    printf("\n\n\t\tWelcome, here you will know as per your age , you are able to drive or not\n");
    printf("\n\t\t\t\t\t\tok...lets try\n");
    printf("Enter your age:\n");
    scanf("%d", &age);

    if(age>18 && age<25){
        printf("YAY!, you are above 18 so you can drive, but be careful!\n");
    }
    else if (age>=25 && age<50)
    {
        printf("you are above 25 and you can drive, becuare you are young\n ");
    }
    else if (age>=50)
    {
        printf("you are above 50 ! so drive carefully\n");
    }
    else{
        printf("You cant drive, becuase you are under 18\n");
    }
    
   return 0;
}