/*Write a program to read a sentence & delete all the white spaces. Replace all "." by ":".*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,l=0,j;
    printf("Enter a sentence:\t");
    scanf("%[^\n]s",s);
   l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
            for(j=i;j<l;j++)
            {
                s[j]=s[j+1];
            }
            l--;
        }
        if(s[i]=='.')
        {
            s[i]=':';
        }
    }
    printf("\n\n");
   printf("%s",s);
   getch();
   return 0;

}


