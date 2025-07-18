# include<stdio.h>
int main()
{

printf("                 10th CLASS MARKS MEMO  ");

int m,s,e,t,h,so,T;

m=s=e=t=h=so=T=0;
printf("\nenter your marks in telugu..:");
scanf("%d",&t);

if(t>=40)
{
    printf("                                  status: pass");
}
else
    printf("                                  status: fail");


printf("\nenter your marks in hindi..:");
scanf("%d",&h);

if(h>=40)
{
    printf("                                  status: pass");
}
else
    printf("                                  status: fail");



printf("\nenter your marks in english..:");
scanf("%d",&e);

if(e>=40)
{
    printf("                                  status: pass");
}
else
    printf("                                  status: fail");




    printf("\nenter your marks in maths..:");
scanf("%d",&m);

if(m>=40)
{
    printf("                                  status: pass");
}
else
    printf("                                  status: fail");


    printf("\nenter your marks in science..:");
scanf("%d",&s);

if(s>=40)
{
    printf("                                  status: pass");
}
else
    printf("                                  status: fail");




    printf("\nenter your marks in social..:");
scanf("%d",&so);

if(so>=40)
{
    printf("                                  status: pass");
}
else
    printf("                                  status: fail");



    T = t+h+e+m+s+so;

    printf("\ntotal marks...");

    printf("%d",T);

if(T>=240)

      {printf("                     total status: pass");
        printf("   \n congratulations you have cleared your exam");}
     else
    {
        printf("                      total status: fail");
        printf(" \n    better luck next time");

    }


    printf("\nthank you ");

    }


