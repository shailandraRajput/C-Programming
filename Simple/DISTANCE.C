/* Program For Find Distance In Various Formate using Formulas */

#include<stdio.h>
#include<conio.h>

void main(void)
{
    float km,m,feet,inch,cm;
    clrscr();
    printf("Enter Distance Between Two Cities In K.M: ");
    scanf("%f",&km);
        m=km*1000;
        feet=km*3280.83;
        inch=km*39370.079;
        cm=km*100000;
    printf("Distance Between cities in meater is %.1f \n",m);
    printf("Distance Between Cities In Feet Is %.1f \n",feet);
    printf("Distance Betwen Citeies in Inch Is %.1f \n",inch);
    printf("Distance Beetwen Cities In CM is %.1f \n",cm);
getch();
}
