/*Write a function which accepts structure as argument and returns structure
 to the calling program.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
struct stdinf
{
    char name[20];
    int roll;
};
struct stdinf change (struct stdinf);
int main()
{
    struct stdinf s;
    strcpy(s.name,"ram");
    s.roll=10;
    printf("Before changing:\n");
    printf("name= %s",s.name);
    printf("\nroll = %d",s.roll);
    s=change (s);
    printf("\n\n\nAfter changing:\n");
    printf("name= %s",s.name);
    printf("\nroll = %d",s.roll);
    getch();
    return 0;
}
struct stdinf change (struct stdinf t)
{
    strcpy(t.name,"hari");
    t.roll = 67;
    return t;
};


