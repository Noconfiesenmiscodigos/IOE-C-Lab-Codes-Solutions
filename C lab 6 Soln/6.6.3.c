/*6) Write a program that illustrates use of local, global and static variables*/
#include<stdio.h>
#include<conio.h>
void fun1();
int main()
{
    fun1();
    fun1();
    fun1();
    return 0;
}

void fun1()
{
    int a = 1;
    static int b = 100;
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);
    a++;
    b++;
}


