# include<stdio.h>
int main()
{
int no;
  no=0;

printf("enter your number between (1 to 5)...:");
scanf("%d",&no);

switch(no)
{
    case 1:printf("one");break;
    case 2:printf("two");break;
    case 3:printf("three");break;
    case 4:printf("four");break;
    case 5:printf("five");break;
    default:printf("\n\ainvalid no...");
}
    }
