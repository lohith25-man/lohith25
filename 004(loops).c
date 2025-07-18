#include <stdio.h>

int main()
{
    int sum,size,c,no;
float avg;

    avg=sum=size=c=no=0;

    c=1;
    printf("how many umbers you want to read");
    scanf("%d",&size);

    while(c<=size)
    {
        printf("enter a no:");
        scanf("%d",&no);

        sum=sum+no;
      c++;
    }
printf("the sum of number:%d",sum);


    avg=(float)sum/size;

    printf("\nthe average of your numbers is %f",avg);



}
