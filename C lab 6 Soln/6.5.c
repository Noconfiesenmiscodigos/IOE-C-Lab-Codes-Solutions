/*Write a program that includes a function which returns 1 if 
the argument passed to it is a prime number and 0 otherwise.*/

#include<stdio.h>
#include<conio.h>
int primech(int);
int main()
{
    int num,c;
    printf("Enter a integer:\t");
    scanf("%d",&num);
    c=primech(num);
    if(c==1)
    {
        printf("%d is prime",num);
    }
    else
    {
        printf("%d is not prime",num);
    }
    getch();
    return 0;
}
int primech(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            break;
        }
    }
    if(i==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


