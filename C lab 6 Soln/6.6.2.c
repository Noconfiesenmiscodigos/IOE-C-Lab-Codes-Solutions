/*6) Write a program that illustrates use of local, global and static variables*/
#include<stdio.h>
#include<conio.h>
int a=100;
void fun1();
void fun2();
int main()
{
    printf("From main a=%d",a);
    fun1();
    fun2();
    getch();
    return 0;
}
void fun1()
{
    printf("\nFrom fun1 a=%d",a);
}
void fun2()
{
    printf("\nFrom fun2 a=%d",a);
}






