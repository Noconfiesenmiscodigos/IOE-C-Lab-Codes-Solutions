/*Write a program to compare two strings.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    char s1[50],s2[50];
    printf("Enter string s1:\t");
    scanf("%[^\n]s",s1);
    printf("Enter string s2:\t");
    scanf(" %[^\n]s",s2);
    printf("\n%d",strcmp(s1,s2));
    getch();
    return 0;

}


