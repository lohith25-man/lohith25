# include<Stdio.h>
int main()
{

int sales,dis,totalamount;

sales=dis=totalamount=0;


printf("enter your sales....:");
scanf("%d",&sales);

if (sales>=25000)

dis=sales*10/100;

else
dis=sales*5/100;

printf("discount:%d",dis);

totalamount=sales-dis;

printf("\ntotal amount is :%d",totalamount);


}
