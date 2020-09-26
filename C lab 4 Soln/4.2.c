/*Write a program to find the largest and smallest among three entered numbers 
and also display whether the identified largest/smallest number is even or odd.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,l,s;
    printf("Enter three numbers:\t");
    scanf("%d%d%d",&a,&b,&c);

    /*to check the greatest number*/
    if(a>b)
    {
        if(a>c)
        {
            l=a;
        }
        else
        {
            l=c;
        }
    }
    else
    {
        if(b>c)
        {
            l=b;
        }
        else
        {
            l=c;
        }
    }

    /*to check the smallest number*/
    if(a<b)
    {
        if(a<c)
        {
            s=a;
        }
        else
        {
            s=c;
        }
    }
    else
    {
        if(b<c)
        {
            s=b;
        }
        else
        {
            s=c;
        }
    }
    if(l%2==0)
    {
        printf("\nThe largest number is %d and it is even",l);
    }
    else
    {
        printf("\nThe largest number is %d and it is odd",l);
    }
    if(s%2==0)
    {
        printf("\nThe smallest number is %d and it is even",s);

    }
    else
    {
        printf("\nThe smallest number is %d and it is odd",s);
    }
    return 0;
}


