/*Write a program to find HCF and LCM of two numbers.*/
#include<conio.h>
#include<stdio.h>
int main()
{
    int num1,num2,r,t1,t2,hcf,lcm;
    printf("Enter two numbers:\t");
    scanf("%d%d",&num1,&num2);
    t1=num1,t2=num2;
    do
    {
        r=num1%num2;
        if(r==0)
        {
            hcf=num2;
            printf("\nHCF between %d and %d is %d.",t1,t2,hcf);
            break;

        }
        num1=num2;
        num2=r;

    }while(r>0);
    lcm=(t1*t2)/hcf;
    printf("\nLCM between %d and %d is %d.",t1,t2,lcm);
    getch();
    return 0;

}



