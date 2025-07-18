# include<stdio.h>
int main()
{

int avg;

avg=0;

printf("enter your average ...:");
scanf("%d",&avg);

if(avg>60)
printf("                         first class");
else
    if(avg>50)
    printf("                     second class");

    else if(avg>40)
    printf("                       third class");

    else

    {printf("                       fail");

    printf("\n better luck next time");
    }
    }


