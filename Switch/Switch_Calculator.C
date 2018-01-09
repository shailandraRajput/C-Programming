/* Program For Simple Calculator From Switch Case Oparator */

#include<stdio.h>
#include<conio.h>

void main(void)
{
    char opt;
    double num1,num2;
    clrscr();
printf("Enter OPRATOR (+,-,*,/): ");
    scanf("%c",&opt);

printf("Enter Two num: ");
    scanf("%lf %lf",&num1,&num2);
switch(opt)
{
case '+':
    printf("%.1lf + %.1lf= %.1lf", num1, num2, num1 + num2);
break;
case '-':
    printf("%.1lf-%.1lf=%1.lf",num1,num2,num1-num2);
break;
case '*':
    printf("%.1lf*%.1lf=%.1lf",num1,num2,num1*num2);
break;
case '/':
    printf("%.1lf / %.1lf=%.1lf",num1,num2,num1/num2);
break;
default:
    printf("Choose Correct OPRATOR From Option");
break;
}
getch();
}