/*Write a program to check whether the entered year is leap year or not (a year is leap if it is divisible 
by 4 and divisible by 100 or 400.)*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int y;
    printf("Enter year:\t");
    scanf("%d",&y);
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            {
                printf("\n%d is leap year",y);
            }
            else
            {
                printf("\n%d is not leap year",y);
            }
        }
        else
        {
            printf("\n%d is leap year",y);
        }
    }
    else
    {
        printf("\n%d is not leap year",y);
    }
   return 0;
}


