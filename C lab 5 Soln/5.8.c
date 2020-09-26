/*Write a program to calculate sum of the following series:
y=x+x^2+x^3+x^4...x^n
where x and n are given by users.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x,sum=0.0;
    int n,i;
    printf("Enter the value of x:\t");
    scanf("%f",&x);
    printf("Enter the value of n:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum + pow(x,i);
    }
    printf("\nSum = %f",sum);
    getch();
    return 0;
}

