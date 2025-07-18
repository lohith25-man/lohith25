# include <stdio.h>

int main()
{
    int r,c,m=1;
    int no[9][10];

    for(r=0;r<9;r++)
    {
        for(c=0;c<10;c++)
        {
           no[r][c]=m;
           m=m+1;
        }
    }

for(r=0;r<9;r++)
{
   for(c=0;c<10;c++)
   {
    printf("\t%d",no[r][c]);
   }
   printf("\n");
}

 return 0;
}
