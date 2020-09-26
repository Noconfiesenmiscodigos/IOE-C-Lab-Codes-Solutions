/*Write a program to concatenate two strings.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50],s3[100];
    printf("Enter string s1:\t");
    scanf("%[^\n]s",s1);
    printf("Enter string s2:\t");
    scanf(" %[^\n]s",s2);
    printf("\ns1=%s",s1);
    printf("\ns2=%s",s2);
    strcat(s1,s2);
    printf("\nThe concatinated string = %s",s1);
    getch();
    return 0;

}



