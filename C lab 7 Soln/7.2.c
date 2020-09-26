/*Write a program to display largest and smallest element of an array defined in Q. No. 1.*/


#include<stdio.h>
#include<conio.h>
float large_ch(float,float);
float small_ch(float,float);
int main()
{
    float num[10];
    float ch;
    int i;
     for (i=0;i<10;i++)
    {
            printf("\nEnter number for num[%d]:\t",i);
            scanf("%f",&num[i]);
    }
    ch=large_ch(num[0],num[1]);
    for(i=2;i<10;i++)
    {
        ch=large_ch(ch,num[i]);

    }
    printf("\nThe largest number = %f",ch);
    ch=0.0;
    ch=small_ch(num[0],num[1]);
    for(i=2;i<10;i++)
    {
        ch=small_ch(ch,num[i]);

    }
    printf("\nThe smallest number = %f",ch);
    getch();
    return 0;
}


float large_ch(float a,float b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

