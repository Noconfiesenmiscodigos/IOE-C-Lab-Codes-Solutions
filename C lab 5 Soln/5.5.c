/*Write a program to print the number from 1 to 100 which is exactly divisible
by 7.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%7==0)
        {
           printf("%d  ",i);
        }

    }
}



