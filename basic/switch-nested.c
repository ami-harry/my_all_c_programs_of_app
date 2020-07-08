#include <stdio.h>
#include<stdlib.h>
int main()
{
    int ch, no = 0;

top:
    printf("Enter your choice(0-2):");
    printf("\n1.veg\n2.Non veg,\n 0 to quit:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("\nthank you for choosing veg");
        printf("\nWe have the following items in veg:\n1.matar paneer-polao \n2.rajama -chawal\n3.edali shambhar\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("You have choosen matar paneer-polao");
            printf("\nYour per plate cost is 250");
        ans:
            printf("\nhow many plate do you want?");
            scanf("%d", &no);
            printf("\nOk, you have to pay Rs.%d at counter, Thank you", no * 250);
            break;
        case 2:
            printf("You have choosen Rajama Chawal");
            printf("\nYour per plate cost is 150");
            printf("\nhow many plate do you want?");
            scanf("%d", &no);
            printf("\nOk, you have to pay Rs.%d at counter, Thank you", no * 150);
            break;
        case 3:
            printf("You have choosen edali shambhar");
            printf("\nYour per plate cost is 50");
            printf("\nhow many plate do you want?");
            scanf("%d", &no);
            printf("\nOk, you have to pay Rs.%d at counter, Thank you", no * 50);
            break;
        default:
            printf("Please enter correct no(1-3).");
            goto ans;
        }
        break;
    case 0:
        printf("\nyour choice is zero, so exiting program:");
        goto bottom;

    default:
        printf("Please enter correct no(1-3).");
        goto top;
    }
bottom:
    printf("\nThank you for visit:");
    exit(0);
    return 0;
}