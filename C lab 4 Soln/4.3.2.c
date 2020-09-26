/*Write a program to check whether input alphabet is vowel or not 
using if-else and switch statement.*/
#include<stdio.h>//b
#include<conio.h>
int main()
{
    char c;
    printf("Enter any alphabet:\t");
    scanf("%c",&c);
    switch(c)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("%c is vowel",c);
        break;
    default:
        printf("%c is not vowel",c);
    }
    return 0;
}


