/*Write a program to find the Fibonacci series up to given number using:
a.	recursive function b. without recursion*/
#include<stdio.h>//b
#include<conio.h>
void fibo(int);
int main()
{
    int n;
    printf("Enter the value of n:\t");
    scanf("%d",&n);
    if(n==1)
    {
        printf("0");
    }
    else
    {
        printf("0  1");
    }
    fibo(n);
    getch();
    return 0;
}
void fibo(int n)
{
    int a=1,b=1,f=1,i=2;
    while(i<n)
    {
        printf("  %d",f);
        f=a+b;
        a=b;
        b=f;
        i=i+1;
    }
}




