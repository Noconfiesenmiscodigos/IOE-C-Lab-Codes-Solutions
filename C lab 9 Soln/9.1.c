 /*Write a program to read RollNo, Name, Address, Age & marks in physics,
  C, math in 1st semester of three students in BCT and display the student 
  details with average marks achieved.*/
#include<stdio.h>
#include<conio.h>
struct stdinf
{
int roll;
char name[20];
int age;
char add[50];
    struct mark
    {
    float p,c,ma;

    }m;

};
int main()
{
    int i;
    float av;

    struct stdinf st[3];
    for(i=0;i<3;i++)
    {
        printf("\nEnter name: ");
        scanf(" %[^\n]s",&st[i].name);
        printf("Enter roll no: ");
        scanf(" %d",&st[i].roll);
        printf("Enter age: ");
        scanf("%d",&st[i].age);
        printf("Enter address: ");
        scanf(" %[^\n]s",&st[i].add);
        printf("Enter marks in physics: ");
        scanf(" %f",&st[i].m.p);
        printf("Enter marks in C: ");
        scanf(" %f",&st[i].m.c);
        printf("Enter marks in maths: ");
        scanf(" %f",&st[i].m.ma);
        printf("\n");

    }
    for(i=0;i<3;i++)
    {
        printf("\nName: %s",st[i].name);
        printf("\nAddress: %s",st[i].add);
        printf("\nAge: %d",st[i].age);
        printf("\nRoll no: %d",st[i].roll);
        av=(st[i].m.ma+st[i].m.p+st[i].m.c)/3;
        printf("\nAverage marks:\t%f",av);
        printf("\n********************************\n");
    }
    getch();
    return 0;
}



