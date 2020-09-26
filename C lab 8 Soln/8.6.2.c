/*Write a program to read a sentence & delete all the white spaces. Replace all "." by ":".*/
#include<stdio.h>//or
int main()
{
    char ch1[100],ch2[100];
	int i;
	printf("enter a statement :");
	gets(ch1);
	int space=0;
	for(i=0;ch1[i]!='\0';i++)
	{

		   if(ch1[i]==' ')
		   {
			   space=space+1;
		   }
		   else
           {

		   if(ch1[i]=='.')
           {
			  ch1[i]=':';
           }
            ch2[i-space]=ch1[i];
           }


	}
	ch2[i-space]='\0';
	printf("\nentered sentence :%s",ch1);
	printf("\nnew sentence :%s",ch2);
	return 0;
}

