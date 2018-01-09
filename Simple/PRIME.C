/* Program For Find Prime Number Without Loop */

#include<stdio.h>
#include<conio.h>

void main(void)
{
    int n;
clrscr();
    printf("Enter A Numer for Prime Or Not: ");
    scanf("%d",&n);
if(n%2==0)
    printf("%d is Not Prime",n);
else
    printf("%d Is Prime",n);
getch();
}
