/*Write a program to sort 5 string words stored in an array of pointers.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j;
    char **s;
    char *temp;
    s=(char **)calloc(5,sizeof(char));
    for(i=0;i<5;i++)
    {
        *(s+i)=(char *)calloc(20,sizeof (char));
    }
    temp=calloc(20,sizeof(char));
    for(i=0;i<5;i++)
    {
        printf("Enter word:\t");
        scanf("%s",s[i]);

    }

    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(s[i],s[j])>0)
            {
                strcpy(temp,s[j]);
                strcpy(s[j],s[i]);
                strcpy(s[i],temp);
            }
        }
    }
    printf("\n\nSorted words:\n");
    for(i=0;i<5;i++)
    {
        printf("\n%s",s[i]);
    }
    getch();
    return 0;
}


