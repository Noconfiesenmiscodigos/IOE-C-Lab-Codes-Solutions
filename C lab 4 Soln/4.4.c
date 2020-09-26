/*Write a program to get input of two or higher digit integer number 
and display in reverse order.*/


#include<stdio.h>
#include<conio.h>
int main()
{
    int num,r,rev=0,t;
    printf("Enter two or more digit number:\t");
    scanf("%d",&num);
    t=num;
    do
    {
        r=num%10;           /*Extracts last digit from num*/
        rev=(rev*10)+r;     /*generates reverse number*/
        num=num/10;         /*removes last digit from original number*/
    }while(num>0);
    printf("\nThe number %d in reverse order is %d",t,rev);
    getch();
    return 0;

}



