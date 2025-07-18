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
    {{
        printf("enter your gender (if male press m,else press F..:");
    fflush(stdin);
    scanf("%c",&gender);}
if(gender=='m')
{


    printf("\nenter your age ...:");
   scanf("%d",&age);
if(age>=30)
printf("you are elgible for bonus ");


 else
    printf("you are not eligible for bonus");
 }

 else

    printf("\nenter your age ...:");
    scanf("%d",&age);

    if(age>=25)
        printf("you are elgible for bonus ");
else
     printf("you are not eligible for bonus");}
    }
