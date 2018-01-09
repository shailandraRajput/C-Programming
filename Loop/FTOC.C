/* Program For Counvert C to F */

#include<stdio.h>
#include<conio.h>
void main(void)
{
    float c,f;
    clrscr();
    printf("Enter The TEMP in C: ");
    scanf("%f",&c);
f=(c*1.8)+32;
c=(f-32)/1.8;
    printf("TEMP in F is %f\n Temp in C is %f",f,c);

getch();
}
