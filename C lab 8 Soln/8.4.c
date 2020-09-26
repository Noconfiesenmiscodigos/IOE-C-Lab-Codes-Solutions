/*Write a program to read a string and check for palindrome without using string related function (a string is palindrome 
if its half is mirror by itself eg: abcdcba).*/
#include<conio.h>
#include<stdio.h>
int main()
{
    int i,j,flag=0,l=0;
    char st[40];
    printf("Enter any string:\t");
    scanf("%s",st);
    for(i=0;st[i]!='\0';i++)
    {
        l=l+1;
    }
    for(i=0,j=l-1;i<l/2;i++,j--)
    {
        if(st[i]!= st[j])
        {
            flag=flag+1;
            break;
        }
    }
    if(flag==1)
    {
        printf("\nNot palindrome");
    }
    else
    {
        printf("\nPalindrome");
    }
    getch();
    return 0;


}


