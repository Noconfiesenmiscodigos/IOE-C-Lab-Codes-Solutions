/*Write a program to take a character input from keyboard and check if it is a number or alphabet or special character using ASCII CODE. Again check if the character is using character functions below:
a) Alphanumeric (isalnum)
b) Blank character (isblank)
c) Alphabetic (isalpha)
d) Control character (iscntrl)
e) Number-digit (isdigit)
f) Upper case (isupper)
g) Lower case (islower)
h) Hexadecimal digit (ixdigit)
i) Graphical character (isgraph)*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    char c;
    int ch;
    printf("Enter any character:\t");
    scanf("%c",&c);
    ch=c;
    if (ch>=48 && ch<=57)
    {
        printf("%c is number\n",c);
    }
    else if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
    {
        printf("%c is alphabet\n",c);
    }
    else if(ch>31)
    {
        printf("%c is special char\n",c);
    }


    if (isalnum(c)==0)
    {
        printf("%c is not alphanumeric\n",c);
    }
    else
    {
        printf("%c is alpha numeric\n",c);
    }
    if (isblank(c)==0)
    {
        printf("%c is not blank character\n",c);
    }
    else
    {
        printf("%c is blank character\n"),c;
    }
    if (isalpha(c)==0)
    {
        printf("%c is not alphabetic\n",c);
    }
    else
    {
        printf("%c is alphabetic\n",c);
    }
    if (iscntrl(c)==0)
    {
        printf("%c is not control character\n",c);
    }
    else
    {
        printf("%c is a control character\n",c);
    }
    if(isdigit(c)==0)
    {
        printf("%c is not a number-digit\n",c);
    }
    else
    {
        printf("%c is a number-digit\n",c);
    }
    if(isupper(c)==0)
    {
        printf("%c is not in upper case\n",c);
    }
    else
    {
        printf("%c is in upper case\n",c);
    }
    if (islower(c)==0)
    {
        printf("%c is not in lower case\n",c);
    }
    else
    {
        printf("%c is in lower case\n",c);
    }
    if (isxdigit(c)==0)
    {
        printf("%c is not hexadecimal digit\n",c);
    }
    else
    {
        printf("%c is hexadecimal digit\n",c);
    }
    if (isgraph(c)==0)
    {
        printf("%c is not graphical character\n",c);
    }
    else
    {
        printf("%c is graphical character\n",c);
    }
    return 0;
}


