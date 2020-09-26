/*Write a program to find the factorial of a given number.*/


#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num;
    long long int fact=1;
    printf("Enter a number:\t");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("\nThe factorial of %d is %lld",num,fact);
    getch();
    return 0;
}


