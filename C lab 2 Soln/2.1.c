#include<stdio.h>
#include<conio.h>
int main()
{
    int m1,m2,m3,m4,m5,roll;
    float percent;
    char name[20];
    printf("Enter your name:\t");
    scanf("%[^\n]s",name);
    printf("\nEnter your roll number:\t");
    scanf("%d",&roll);
    printf("\nEnter your marks in 5 subjects:\t");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    percent=(m1+m2+m3+m4+m5)/5;
    printf("Name:\t%s",name);
    printf("\nRollno: %d",roll);
    printf("\nYour percentage: %f",percent);
    return 0;
}

