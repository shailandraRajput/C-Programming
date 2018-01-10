/* Program For Swap Two Number */

#include<stdio.h>
#include<conio.h>
void main(void)
{
    int a,b,temp;
    clrscr();
    printf("Enter First Number For Swap A: ");
        scanf("%d",&a);
    printf("Enter Second Number For Swap B: ");
        scanf("%d",&b);
 temp=a;
 a=b;
 b=temp;
    printf("After Number sweping A=%d and B=%d",a,b);
 getch();
 }