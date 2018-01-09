/* Program For Print Paten */

#include<stdio.h>
#include<conio.h>

void main(void)
{
    int z=1;
    int n=6;
    int i,j,k;
    clrscr();
for(i=1;i<=6;i++)
{
for(j=n-1;j>=i;j--)
{
    printf(" ");
}
for(k=0;k<z;k++)
{
    printf("*");
}
    z+=2;
    printf("\n");
}
getch();
}

/* OutPut
        *   
       ***
      *****
     *******
    *********
   ***********

*/

