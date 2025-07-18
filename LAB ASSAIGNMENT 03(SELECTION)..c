# include<stdio.h>
int main()
{

int sales,disc,totalamount;
sales=disc=totalamount;

printf("enter the price of all items ...:");
scanf("%d",&sales);

if (sales>=25000)
{  disc=10;
   totalamount=sales-sales*disc/100;
printf("THE TOTAL BILL AMOUNT %d",totalamount);}


else
disc=5;
{totalamount=sales-sales*disc/100;

printf("THE TOTAL AMOUNT IS %d",totalamount);
}

}
