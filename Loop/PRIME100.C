/*Program For Print Prime number Between 1 To 100 */

#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j;
    int b=0;
    for (i=2;i<=100;i++){
        for (j=2;j<=i;j++){
            if (i%j==0){
                break;
            }
        }
        if (i==j)
            printf("\n%d",j);
    }
    getch ();
}

/*Program Which Is Not Print 2
#include<stdio.h>
#include<conio.h>
void main(void)
{
int i,j;
clrscr();
for(i=2;i<100;i++)
{
for(j=2;j<i;j++)
{
if(i%j!=0)
printf("%d,",i);
break;
}
}
getch();
}
*/