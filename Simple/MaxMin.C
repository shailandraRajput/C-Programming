/* Program for find maximum And minimum Number using If...Else */

#include<stdio.h>
#include<conio.h>

void main(void)
{
    int a,b,c;
    clrscr();
printf("Enter Two Number For find Maximum and Minimum number:- ");
scanf("%d%d",&a,&b);

if(a<b)
printf("%d is Maximum",b);
else
printf("%d is Maximum",a);
getch();
}