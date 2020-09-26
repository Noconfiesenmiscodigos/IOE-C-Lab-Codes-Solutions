/*Write a program to show programming examples with union and enumerations.*/
#include<stdio.h>// union
#include<conio.h>
union std
{
    char *name;
    int roll;
    int age;
};
int main()
{
    union std s;
    s.roll=10;

    s.age=20;
    s.name="anuj";
   printf("\nName= %s",s.name);
    printf("\nroll no = %d",s.roll);
    printf("\nAge=%d",s.age);
    getch();
    return 0;

}


