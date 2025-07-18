# include<stdio.h>
int main()
{

char x;

x=0;
printf("enter a alphabhet...:");
scanf("%C",&x);

if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
printf("it is an vowel");
else
    printf("it is an consonent");
}
