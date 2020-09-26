/*Write a program to read a sentence and count 
the number of characters &words in that sentence.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,l=0,ch=0,w=1;
    char s[100];
    printf("Enter any sentence:\t");
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {
        l=l+1;
    }
    for(i=0;i<l;i++)
    {
        if(s[i]!=' ')
        {
            ch=ch+1;
        }
        else if(s[i+1]!=' '&&s[i+1]!='\0')
        {
            w=w+1;
        }
    }
    printf("\nNo. of characters:\t%d",ch);
    printf("\nNo of words:\t%d",w);
    getch();
    return 0;
}

