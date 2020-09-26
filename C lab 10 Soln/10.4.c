/*Write set of strings each of length 40 into a file "stringc.txt" and display it 
(use fputs() and fgets() function).*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char st[41];
    char ch;
    fp=fopen("stringc.txt","w");
    do
    {
      printf("Enter any string:\n");
      scanf(" %[^\n]s",st);
      fputs(st,fp);
      fputs("\n",fp);
      printf("\nDo you want to add another string (Y/N)?");
      scanf(" %c",&ch);
    }while(ch=='y'||ch=='Y');
    fclose(fp);
    fp=fopen("stringc.txt","r");
    printf("\nEntered string:\n");
    while(fgets(st,41,fp)!=NULL)
    {

        printf("%s\n",st);
    }
    fclose(fp);
    getch();
    return 0;
}

