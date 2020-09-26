/*Write a program to calculate sum of first 50 natural 
numbers using recursive function.*/
#include<stdio.h>
#include<conio.h>
int sum();
int main()
{

    printf("\nSum of first 50 natural num is %d",sum());
    getch();
    return 0;
}
int sum()
{
   static int i=1,s=0;
    s=s+i;
    i=i+1;
    if(i<=50)
    {
        sum();
    }
    return s;

}


