# include<stdio.h>
int main()
{

char  martialstat,gender;
int age;

printf("martial status(if married press M,else press U.:");
scanf("%c",& martialstat);



if(martialstat=='M')
    printf("you are elgible for bonus");
else
    {printf("enter your gender (if male press m,else press F..;");
    scanf("%c",&gender);
    printf("enter your age ...:");
    scanf("%d",&age);}

}
