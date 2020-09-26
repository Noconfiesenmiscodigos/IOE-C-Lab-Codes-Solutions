/*Define a function named fact() to calculate factorial of a 
number n and then write a program that uses this function fact() 
to calculate combination and permutation.*/
#include<stdio.h>
#include<conio.h>
long int fact(int);
int main()
{
    int n,r,p,c;
    printf("Enter the value of n and r:\t");
    scanf("%d %d",&n,&r);
    p=fact(n)/fact(n-r);
    c=fact(n)/(fact(n-r)*fact(r));
    printf("\npermutation = %d",p);
    printf("\ncombination = %d",c);
    getch();
    return 0;
}
long int fact(int n)
{
    int f=1,i;
    for (i=2;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

