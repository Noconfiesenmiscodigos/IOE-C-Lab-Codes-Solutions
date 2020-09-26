/*Pass the structures defined in Question 1 into a function and read 
the structure member and display the values from the function (use structure pointer).*/


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
void display (struct stdinf*);
int main()
{
    int i;
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
    display(&st);

    getch();
    return 0;
}
void display(struct stdinf *t)
{
    float av;
    int i;
    for(i=0;i<3;i++)
    {
        printf("\nName: %s",(t+i)->name);
        printf("\nAddress: %s",(t+i)->add);
        printf("\nAge: %d",(t+i)->age);
        printf("\nRoll no: %d",(t+i)->roll);
        av=((t+i)->m.ma+(t+i)->m.p+(t+i)->m.c)/3;
        printf("\nAverage marks:\t%f",av);
        printf("\n********************************\n");
    }
}




