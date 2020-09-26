/*Write a program to initialize one dimensional array of size 8 and 
display the sum and average of array elements.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float num[8],s=0;
    int i;
     for (i=0;i<8;i++)
    {
            printf("\nEnter number for num[%d]:\t",i);
            scanf("%f",&num[i]);
            s=s+num[i];
    }
    printf("\nThe sum of array elements = %f",s);
    printf("\nThe average of array elements = %f",s/8);
    getch();
    return 0;

}


