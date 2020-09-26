#include<stdio.h>//or
#include<conio.h>
/*Write a program to copy one string to another string with and 
without using string handling function.*/
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int i;
    printf("Enter a string:\t");
    scanf("%[^\n]s",s1);
    printf("\nString in s1: %s",s1);
   strcpy(s2,s1);
    printf("\nString copied to s2: %s",s2);
    getch();
    return 0;
}

