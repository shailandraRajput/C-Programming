/* Program For Print Number From Start Point To End Point */

#include<stdio.h>
#include<conio.h>

void main(void)
{
  int a,b,i;
    printf("Enter Start Point:- ");
        scanf("%d",&a);
    printf("Enter Finish Point:- ");
        scanf("%d",&b);

for(i=a;i<=b;i++)
{
    printf("%d,",i);
}
getch();
}