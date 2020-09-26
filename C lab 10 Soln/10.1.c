/*Write a program to read RollNo, Name, Address, Age & marks in physics, C, 
math in 1st semester of three students in BCT. Store the records into a 
file std.txt located at d:\ drive. Display the student details with average 
marks achieved (use data files record I/O).*/
#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    char add[50];
    int roll;
    struct marks
    {
        float mark[3];
    }m;
};
typedef struct student student;
int main()
{
   student s;
   FILE *std;
   std=fopen("D:\\std.txt","wb");
   if(std==NULL)
   {
       printf("File not created !!");
       exit(0);
   }
   int i,j;
   float sum;
   for(i=0;i<3;i++)
   {
       printf("Enter name:\t");
       scanf("  %[^\n]s",&s.name);
       printf("Enter address:\t");
       scanf(" %[^\n]s",&s.add);
       printf("Enter roll number:\t");
       scanf("%d",&s.roll);
       printf("Enter marks in physics:\t");
       scanf("%f",&s.m.mark[0]);
       printf("Enter marks in math:\t");
       scanf("%f",&s.m.mark[1]);
       printf("Enter marks in C:\t");
       scanf("%f",&s.m.mark[2]);
       fwrite(&s,sizeof(s),1,std);
       printf("\n\n");
   }
   fclose(std);
   std=fopen("D:\\std.txt","rb");
   if(std==NULL)
   {
       printf("No file found !!");
       exit(1);
   }
   printf("\n%-24s %-23s %-24s %-25s\n","Name","Address","Roll","Average");
   printf("**********************************************************************************************\n");
   for(i=0;i<3;i++)
   {    sum=0;
       fread(&s,sizeof(s),1,std);
       printf("%-25s",s.name);
       printf("%-25s",s.add);
       printf("%-25d",s.roll);
       sum=s.m.mark[0]+s.m.mark[1]+s.m.mark[2];
       printf("%-25f",sum/3);
       printf("\n\n");

   }
   fclose(std);
   getch();
   return 0;
}

