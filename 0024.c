# include<stdio.h>
int main()
{
printf(" main-menu");
printf("\n---------");
printf("\n1.addition");


printf("\n2.subbraction");
printf("\n3.multiplication");
printf("\n4.division");
printf("\n5.remmainder");
printf("\n6.exit");

int no1,no2,opt,res;
no1=no2=opt=res=0;

printf("\nenter your first no:");
scanf("%d",&no1);

printf("\nenter your second no:");
scanf("%d",&no2);

printf("\nenter your option (1 to 6)");
scanf("%d",&opt);


if(opt==1)
{{
    res=no1+no2;
    printf("%d+%d=%d",no1,no2,res);
}
if(opt==2)
{
    res=no1-no2;
    printf("%d-%d=%d",no1,no2,res);
}
if(opt==3)
{
    res=no1*no2;
    printf("%d*%d=%d",no1,no2,res);
}
if(opt==4)
{
    res=no1/no2;
    printf("%d/%d=%d",no1,no2,res);
}
if(opt==5)
{
    res=no1%no2;
    printf("%d%%%d=%d",no1,no2,res);
}
if(opt==6)

    exit(0);
}
else
    printf("\ainvalid input ");

    }
