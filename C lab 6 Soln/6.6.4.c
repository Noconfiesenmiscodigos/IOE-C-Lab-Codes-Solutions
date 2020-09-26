#include<stdio.h>
/*6) Write a program that illustrates use of local, global and static variables*/
#include<conio.h>
int main()
{
    int a=50;
    {
        int a=100;
        printf("a=%d",a);
    }
    printf("\na=%d",a);
    getch();
    return 0;

}

