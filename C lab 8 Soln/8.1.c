/*Write a program to find biggest among three numbers using pointer.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int *a,*b,*c,x,y,z;
    printf("Enter three numbers:\t");
    scanf("%d%d%d",&x,&y,&z);
    printf("\n");
    a=&x;
    b=&y;
    c=&z;
    if(*a>*b)
    {
        if(*a>*c)
        {
            printf("%d is largest.",*a);

        }
        else
        {
            printf("%d is largest.",*c);
        }
    }
    else
    {
        if(*b>*c)
        {
            printf("%d is largest.",*b);
        }
        else
        {
            printf("%d is largest.",*c);
        }
    }
    getch();
    return 0;
}


