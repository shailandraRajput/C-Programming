/* Program For Print 1 to Users Choice Number Using Do...While... Loop*/ 

#include<stdio.h>
#include<conio.h>

void main(void)
{
    int num=1,n;
    clrscr();
printf("Enter End Point:- ");
scanf("%d",&n);
do
{
    printf("%d\n",num);
    num=num+1;
}
    while(num<=n);

getch();
}