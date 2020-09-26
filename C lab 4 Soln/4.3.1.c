/*Write a program to check whether input alphabet is vowel or not 
using if-else and switch statement.*/

#include<stdio.h>//a
#include<conio.h>
int main()
{
    char c;
    printf("Enter any alphabet:\t");
    scanf("%c",&c);
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')  /*Vowel can be in both uppercase and lowercase*/
        printf("%c is a vowel",c);
    else
    {
        printf("%c is not vowel",c);
    }
    return 0;
}


