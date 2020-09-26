/*Write a program to swap two variables values with and without using third variables.*/
#include<stdio.h>//3 variables
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter two number:\t");
    scanf("%d%d",&a,&b);
    printf("Before swapping a= %d and b= %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping a= %d and b= %d",a,b);
    return 0;
}


