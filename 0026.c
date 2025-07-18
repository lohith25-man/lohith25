# include<stdio.h>
int main()
{
    int bill,totalbill,days, disc;
    char mode,enter;
    bill=totalbill=mode=disc=days=enter=0;
printf(" welcome to AH MOBILES");
printf("\n enter your bill amount...:");

scanf("%d",&bill);

    printf("enter your mode of payment(if cash-c,EMI-E)...:");
    fflush(stdin);
    scanf("%c",&mode);

    if(mode=='c'||mode=='C')
   {

    disc=25;
    totalbill= bill -bill*disc/100;
    printf(" TOTAL BILL AMOUNT IS %d",totalbill);
   }

     if (mode=='E')
 {

    {
printf( "\nenter days for the emi..:");
scanf("%d",&days);}
if (days<=7)
   {

    disc=15;
totalbill=bill-bill*disc/100;
printf("total bill is %d",totalbill);
     }
else
{
    disc=10;
    totalbill=bill+bill*disc/100;
    printf("TOTAL BILL AMOUNT IS %d",totalbill);
}}

    }
