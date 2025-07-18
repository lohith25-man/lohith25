#include <stdio.h>

int main()
{
  int no,d;
  no=d=0;

  printf("enter a no..:");
  scanf("%d",&no);

  while(no!=0)
  {

      no=no/10;
      printf("%d",no);
      d++;
  }


printf("the digits in your number is %d");

}
