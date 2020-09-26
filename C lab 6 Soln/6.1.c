/*Write a program to add, subtract, multiply and divide two integers 
using user defined type function with return type.*/

#include<stdio.h>
#include<conio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
    int num1,num2;
    printf("Enter any two integer:\t");
    scanf("%d%d",&num1,&num2);
    printf("\nSum = %d",sum(num1,num2));
    printf("\nProduct = %d",mul(num1,num2));
    printf("\nDifference = %d",sub(num1,num2));
    printf("\nQuotient = %d",div(num1,num2));
    getch();
    return 0;
}
   int sum(int x,int y)
   {
       return (x+y);
   }
   int sub(int x,int y)
   {
       return (x-y);
   }
   int mul(int x, int y)
   {
       return (x*y);
   }
   int div(int x, int y)
   {
       return (x/y);
   }

