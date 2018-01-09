/*Program For Print Patten using For*/
#include<stdio.h>
#include<conio.h>

void main(void)
{
int i,j;
clrscr();

	for(i=1;i<=5;i++)
{
	for(j=1;j<=i;j++)
{
    printf("%d",i);
}
	printf("\n");
}

getch();
}

/* Output
1
22
333
4444
55555
*/