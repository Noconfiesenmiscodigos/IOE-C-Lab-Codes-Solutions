/*Write characters into a file "filec.txt". The set of characters are read 
from the keyboard until enter key is pressed.*/


#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    fp=fopen("filec.txt","w");
    if(fp==NULL)
    {
        printf("No file created !!");
        exit(0);
    }
    char ch;
    printf("Enter any character\n(press enter to exit)\n");
    while(1)
    {
        ch=getchar();
        if (ch=='\n')
        {
            break;
        }
        fputc(ch,fp);
    }
    fclose(fp);
    getch();
    return 0;
}

