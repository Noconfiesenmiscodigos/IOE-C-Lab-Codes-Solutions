/*Write a program to find the sum of all the elements of an array using pointers.*/

#include<stdio.h>
#include<conio.h>
int sum_ar(int *,int);
int main()
{
    int c,i,sum=0;
    printf("How many numbers to be added in the array?:\t");
    scanf("%d",&c);
    int num[c];
    for(i=0;i<c;i++)
    {
        printf("\nEnter element of  num[%d]:\t",i);
        scanf("%d",num+i);
    }
    printf("\nThe sum=%d",sum_ar(num,c));
    getch();
    return 0;
}
int sum_ar(int *k,int a)
{
    int s=0,i;
    for (i=0;i<a;i++)
    {
        s=s+*(k+i);
    }
    return s;
}

