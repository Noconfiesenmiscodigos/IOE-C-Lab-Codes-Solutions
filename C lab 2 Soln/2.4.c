/*Write a program to calculate simple and compound interest.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int p,t;
    float si,r,m,n,ci;
    printf ("Enter principle, rate in percentage and time:\t");
    scanf("%d%f%d",&p,&r,&t);
    si=(p*t*r)/100;
    m=(1+r/100);
    n=pow(m,t);
    ci=p*(n-1);
    printf ("Simple interest= %f",si);
    printf("\nCompound interest= %f",ci);
    return 0;
}


