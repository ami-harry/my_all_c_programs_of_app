#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, no = 0;
start:
    printf("\t\t\t\tWelcome to the Hotel Sir,!\n");
    printf("Please choose what do you like to have\n1 for veg food\n2 for non-veg food \n3 for snacks\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    veg:
        printf("You have selected Veg food\nPlease chhose what you want to order\n");
        printf("1 for Rajma-chawal\n2 for veg-biryani \n3 for roti-paneer\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("You have selected Rajma chawal\n");
            printf("Rajma chawal costs 120/per plate\n");
            printf("enter how plate you want to order\n");
            scanf("%d", &no);
            printf("For %d plate of Rajma chawal you have to pay RS-%d/- on counter\n", no, 120 * no);
            printf("would you like to order again\nif yes! press 1 to order again or to exit press any key\n");
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
            printf("You have selected veg biryani\n");
            printf("veg biryani costs 180/per plate\n");
            printf("enter how plate you want to order\n");
            scanf("%d", &no);
            printf("For %d plate of Rajma chawal you have to pay RS-%d/- on counter\n", no, 120 * no);
            printf("would you like to order again\nif yes! press 1 to order again or to exit press any key\n");
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
            printf("You have selected roti paneer\n");
            printf("roti paneer costs 80/per plate\n");
            printf("enter how plate you want to order\n");
            scanf("%d", &no);
            printf("For %d plate of roti paneer you have to pay RS-%d/- on counter\n", no, 120 * no);
            printf("would you like to order again\nif yes! press 1 to order again or to exit press any key\n");
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
            printf("please enter correct input\n");
            printf("fir se  order krna hai? to press 1 and ni krna to koi v key press krke exit\n");
            scanf("%d", &choice);
            if (choice == 1)
            {
                goto veg;
            }
            else
            {
                goto bottom;
            }
        }
    case 2:
    non:
        printf("You have choosen Non-veg food\n");
        printf("Choose kya chahiye\n1-chicken biryani\n2-mutton biryani\n3-pulaav\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("You have choosen chicken biryani\n");
            printf("ek plate ka 200 ruppes hai\n");
            printf("enter kitne plates chahiye");
            scanf("%d", &no);
            printf("For %d plate you have to pay %d rupees\n", no, 250 * no);
            printf("fir se order krna hai to enter 1\n or exit krna krna hai tokoi v key\n");
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
            printf("you have choosen mutton biryani\n");
            printf("ek plate ka 250 rupees\n");
            printf("kitne plate order krna hai?\n");
            scanf("%d", &no);
            printf("itna %d plate ke liye %d rupees dena hoga\n ", no, 250 * no);
            printf("fir se order krna hai to enter 1\n or exit krna krna hai tokoi v key\n");
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
            printf("you have choosen pulav\n");
            printf("ek plate ka 50 rupees\n");
            printf("kitne plate order krna hai?\n");
            scanf("%d", &no);
            printf("itna %d plate ke liye %d rupees dena hoga\n ", no, 50 * no);
            printf("fir se order krna hai to enter 1\n or exit krna krna hai tokoi v key\n");
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
            printf("enter valid input\n");
            printf("fir se order krna hai? to press 1 and ni krna to koi v key press krke exit\n");
            scanf("%d", &choice);
            if (choice == 1)
            {
                goto non;
            }
            else
            {

                goto bottom;
            }
        }
    case 3:
    snak:
        printf("You have choosen for snacks\n");
        printf("In the snacks choose\n");
        printf("1 for Chai-samosa and lays pack\n2 for coffie-lays pack\3 for samosa-litti\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("You have choosen chai-samosa and lays pack\n");
            printf("for one order you have to pay 40 ruppes for this\n");
            printf("you will get 1 chai , 2 samosa and 1 lays packet in this order\n");
            printf("enter how many cup you want to order\n");
            scanf("%d", &no);
            printf("for %d order you have to pay rs-%d \n ", no, 40 * no);
            printf("fir se order krna hai to enter 1\n or exit krna krna hai tokoi v key\n");
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
            printf("You have choosen coffie-lays pack\n");
            printf("for one order you have to pay 33 ruppes for this\n");
            printf("you will get 1 cup of coffie and 1 packet of lays in this order\n");
            printf("enter how many cup you want to order\n");
            scanf("%d", &no);
            printf("for %d order you have to pay rs-%d \n ", no, 40 * no);
            printf("fir se order krna hai to enter 1\n or exit krna krna hai tokoi v key\n");
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
            printf("You have choosen samos-litti  pack\n");
            printf("for one order you have to pay 20 ruppes for this\n");
            printf("you will get 1 samosa and 1 litti  in this order\n");
            printf("enter how many cup you want to order\n");
            scanf("%d", &no);
            printf("for %d order you have to pay rs-%d \n ", no, 40 * no);
            printf("fir se order krna hai to enter 1\n or exit krna krna hai tokoi v key\n");
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
            printf("please enter valid input\n");
            printf("fir se order krna hai to ek press kre wrna exit krna hai to koi v key\n");
            scanf("%d", &no);
            if (no == 1)
            {
                goto snak;
            }
            else
            {
                goto bottom;
            }
            break;
        }
    default:
        printf("Enter valid input\n");
        printf("fir se order krna hai? to press 1 and ni krna to koi v key press krke exit\n");
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
    printf("Thanks for visiting our hotel\n visit again\nHave a great day ahead\n");
    exit(0);
    return 0;
}