/*Write a program to print the following pattern:
U N
U N I V
U N I V E R
U N I V E R S I
U N I V E R S I T Y
U N I V E R S I
U N I V E R
U N I V
U N
U*/

#include<stdio.h>
#include<conio.h>
int main()
{
    char s[]="UNIVERSITY";
    int i,j;
    for(i=1;i<6;i++)
    {
        for(j=0;j<(i*2);j++)
        {
            printf("%c ",s[j]);
        }
        printf("\n");

    }
    for(i=4;i>=1;i--)
    {
        for(j=0;j<(i*2);j++)
        {
            printf("%c ",s[j]);
        }
        printf("\n");
    }
getch();
return 0;
}





