/* Program For Find factorial using For Loop */

#include<stdio.h>
#include<conio.h>
void main(void)
{
    int i,n,fact=1;
    clrscr();
    printf("Enter A Number for find factorial: ");
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
    fact=fact*i;
}
    printf("Factorial Of Givan Number is %d",fact);
getch();
}