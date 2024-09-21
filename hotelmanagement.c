#include<stdio.h>

int main()

{
    int ch,q,net=0,i;
    again:
    printf("\t\t\t\t\t    ~Welcome to Anbu Canteen~\n\n");
    printf("------------------------------------------------------------------------------------------------------------------------");

    printf("\t\t\t\t\t\t     MENU\n");
    printf("\t\t\t\t\t     1.TEA           10 Rs\n\n");
    printf("\t\t\t\t\t     2.COFFEE        15 Rs\n\n");
    printf("\t\t\t\t\t     3.COLDCOFFEE    30 Rs\n\n");
    printf("\t\t\t\t\t     4.MILKSHAKE     35 Rs\n\n");
    printf("\t\t\t\t\t     5.ROSEMILK      40 Rs\n\n");
    printf("\t\t\t\t\t     6.BAJJI          6 Rs\n\n");
    printf("\t\t\t\t\t     7.VADAI          6 Rs\n\n");
    printf("\t\t\t\t\t     8.SAMOSA         6 Rs\n");
    printf("------------------------------------------------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\t     Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("\n\nYou have selected Tea\n\n");
        printf("Enter the Quantity:");
        scanf("%d",&q);
        net+=(q*10);
        break;
    case 2:
        printf("\n\nYou have selected Coffee\n\n");
        printf("Enter the Quantity:");
        scanf("%d",&q);
        net+=(q*15);
        break;

    case 3:
        printf("\n\nYou have selected ColdCoffee\n\n");
        printf("Enter the Quantity:");
        scanf("%d",&q);
        net+=(q*30);
        break;
    case 4:
        printf("\n\nYou have selected MilkShake\n\n");
        printf("Enter the Quantity:");
        scanf("%d",&q);
        net+=(q*35);
        break;
    case 5:
        printf("\n\nYou have selected RoseMilk\n\n");
        printf("Enter the Quantity:");
        scanf("%d",&q);
        net+=(q*40);
        break;
    case 6:
        printf("\n\nYou have selected Bajji\n\n");
        printf("Enter the Quantity:");
        scanf("%d",&q);
        net+=(q*6);
        break;
    case 7:
        printf("\n\nYou have selected Vadai\n\n");
        printf("Enter the Quantity:");
        scanf("%d",&q);
        net+=(q*6);
        break;
    case 8:
        printf("\n\nYou have selected Samosa\n\n");
        printf("Enter the Quantity:");
        scanf("%d",&q);
        net+=(q*6);
        break;
    }
    printf("\n\nWant More PRESS 1 :");
    scanf("%d",&i);
    if(i==1)
    {
        goto again;
    }
    printf("\n\nTotal Amount  :%d",net);
    printf("\n\n\t\t\t\t\t\tThank you!!ComeAgain\n\n");


    return 0;
}
