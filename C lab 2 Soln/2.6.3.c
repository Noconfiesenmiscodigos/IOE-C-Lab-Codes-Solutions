/*Write a program to check odd or even number 
(a) using modulus operator 
(b) using bitwise operator 
(c) without using bitwise and modulus operator 
(d) using conditional operator.*/
#include<stdio.h>//c
#include<conio.h>
int main()
{
    int num,q;
    printf("Enter any number:\t");
    scanf("%d",&num);
    q=num/2;
    q=q*2;
    if (q==num)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}


