/*Write a program to check odd or even number 
(a) using modulus operator 
(b) using bitwise operator 
(c) without using bitwise and modulus operator 
(d) using conditional operator.*/
#include<stdio.h>//b
#include<conio.h>
int main()
{
    int num;
    printf("Enter any number:\t");
    scanf("%d",&num);
    if((num&1)==0)
    {
        printf("%d is even",num);
    }
    else
    {
        printf("%d is odd",num);
    }
    return 0;
}


