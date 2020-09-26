/*Write name, age and height of a person into a data file "person.txt" 
and read it (use fprintf() and fscanf() function).*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct person
{
    char name[20];
    int age;
    float height;
};
typedef struct person person;
int main()
{
    person p;
    FILE *fp;
    fp=fopen("person.txt","w");
    if(fp==NULL)
    {
        printf("no file is created !!");
        exit(0);
    }
    printf("Enter name:\t");
    scanf(" %[^\n]s",&p.name);
    printf("Enter age:\t");
    scanf("%d",&p.age);
    printf("Enter height:\t");
    scanf("%f",&p.height);
    printf("\n\nSaving information on person.txt....");
    fprintf(fp,"%s %d %f",p.name,p.age,p.height);
    printf("\nSaving completed successfully");
    fclose(fp);
    fp=fopen("person.txt","r");
    fscanf(fp,"%s %d %f",&p.name,&p.age,&p.height);
    printf("\nDisplaying information from file:\n");
    printf("\nName: %s",p.name);
    printf("\nAge: %d",p.age);
    printf("\nHeight: %0.2f",p.height);
    fclose(fp);
    getch();
    return 0;
}





