/*Write a program to enter 10 floating numbers in an array and display it.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int i;
    float num[10];
    for (i=0;i<10;i++)
    {
            printf("\nEnter number for num[%d]:\t",i);
            scanf("%f",&num[i]);
    }
    system("cls");
    for(i=0;i<10;i++)
    {
        printf("\nElement on num[%d] = %f",i,num[i]);
    }
    getch();
    return 0;
}


