/* Program For Print 1 to 20 Using Do...While... Loop*/ 

#include<stdio.h>
#include<conio.h>

void main(void)
{
    int num=1;
    clrscr();
do
{
    printf("%d\n",num);
    num=num+1;
}
    while(num<=20);

getch();
}