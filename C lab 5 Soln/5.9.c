/*Write a program to find sum as Y of the following series excluding prime
numbers in the series.
Y=1+1^2/1!+2^2/2!+3^2/3!+...+10^2/10!*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float y=2.0,f=1.0;
    int i,j,c;
    for (i=2;i<=10;i++)
    {
        f=f*i;
        c=0;
          for(j=2;j<i;j++)
          {
            if(i%j==0)
            {
                c=c+1;
                break;
            }
        }
        if(c!=0)
        {
            y=y+pow(i,2)/f;
        }
    }
    printf("sum= %f",y);
}



