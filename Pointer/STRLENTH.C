/* Program For Find Length Of String Using Pointer */

#include<stdio.h>
#include<conio.h>

int s_len(char *);

void main()
{
    char str[100];
clrscr();

    printf("Enter String For Find Length:- ");
        gets(str);

    printf("\n str is %d",s_len(str));
getch();
}
    int s_len(char *s)
{
    int i=0;
while(s[i]!='\0')
i++;
return(i);
}