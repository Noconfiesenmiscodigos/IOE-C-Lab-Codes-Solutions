/*Read characters from file "filec.txt" created in question 2. 
Also count the number of characters in the file.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char ch;
    int n=0;
    fp=fopen("filec.txt","r");
    printf("Characters form file:\n");
    while(1)
    {
        ch=fgetc(fp);

        if (ch==EOF)
        {
            break;
        }
        printf("%c",ch);
        n=n+1;
    }
    printf("\nNo of characters = %d",n);
    fclose(fp);
    getch();
    return 0;
}



