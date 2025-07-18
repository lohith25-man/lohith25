#include <stdio.h>

int main()
{
   int tno,c,res;
   tno=res=0;

   printf("enter a table no:");
   scanf("%d",&tno);

   for(c=0;c<=12;c++)
   {
     res=tno*c;

    printf("\n%d*%d=%d",tno,c,res);

   }


}
