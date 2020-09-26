/*Write a program to read RollNo, Name, Address, Age & average-marks of 12 
students in the BCT class and display the details from function.*/

#include<stdio.h>
#include<conio.h>
struct stdinfo
{
    int roll;
    char name[20];
    char add[50];
    int age;
    float avg;

};
void display(struct stdinfo[]);
int main()
{
    int i;
    struct stdinfo st[12];
    for(i=0;i<12;i++)
    {
        printf("\nEnter name: ");
        scanf(" %[^\n]s",&st[i].name);
        printf("Enter roll no: ");
        scanf(" %d",&st[i].roll);
        printf("Enter age: ");
        scanf("%d",&st[i].age);
        printf("Enter address: ");
        scanf(" %[^\n]s",&st[i].add);
        printf("Enter average marks: ");
        scanf(" %f",&st[i].avg);

    }
    display(st);
    getch();
    return 0;

}
void display(struct stdinfo t[])
{
    int i;
     for(i=0;i<12;i++)
    {
        printf("\nName: %s",t[i].name);
        printf("\nAddress: %s",t[i].add);
        printf("\nAge: %d",t[i].age);
        printf("\nRoll no: %d",t[i].roll);
        printf("\nAverage marks:\t%f",t[i].avg);
        printf("\n********************************\n");
    }
}



