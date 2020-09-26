/*Write a program to generate fibonacci series until the term is less than 500.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1,b=1,f=1;
    printf("0  1");
    do
    {
        printf("  %d",f);
        f=a+b;
        a=b;
        b=f;
    }while(f<500);
    getch();
    return 0;
}


