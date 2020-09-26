/*Write a program to copy one string to another string with and 
without using string handling function.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char s1[100],s2[100];
    int i;
    printf("Enter a string:\t");
    scanf("%[^\n]s",s1);
    printf("\nString in s1: %s",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    printf("\nString copied to s2: %s",s2);
    getch();
    return 0;
}

