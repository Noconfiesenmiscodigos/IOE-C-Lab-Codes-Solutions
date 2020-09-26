/*Write a program to swap two variables values with and without using third variables.*/
#include<stdio.h>//2 variables
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter any two number:\t");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping a= %d and b= %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping a= %d and b= %d",a,b);
    return 0;
}

