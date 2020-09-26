/*Write a program that asks a number and test the number whether it is multiple of 5 or 
not, divisible by 7 but not by eleven.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter any number:\t");
    scanf("%d",&a);
    if((a%5)==0)
    {
        printf("\n%d is divisible by 5",a);
    }
    else
    {
        printf("\n%d is not divisible by 5",a);
    }




    if((a%7)==0)
    {
        if((a%11)!=0)
        {
            printf("\n%d is divisible by 7 but not by 11",a);
        }
    }
    else
    {
        if((a%11)!=0)
        {
            printf("\n%d is not divisible by 7 and not by 11",a);
        }
    }
    return 0;
}


