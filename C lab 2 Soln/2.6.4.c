/*Write a program to check odd or even number 
(a) using modulus operator 
(b) using bitwise operator 
(c) without using bitwise and modulus operator 
(d) using conditional operator.*/
#include<stdio.h>//d
#include<conio.h>
int main()
{
    int num;
    printf("Enter any number:\t");
    scanf("%d",&num);
    (num%2==0)?printf("The number is even"):printf("The number is odd");
    return 0;
}




