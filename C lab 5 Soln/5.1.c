/*Write a program to input two integer numbers and display the sum of even
numbers between these two input numbers.*/
#include<stdio.h>
#include<conio.h>
int main()
{
   int i,start,end,c,sum=0;
   printf("Enter starting number:\t");
   scanf("%d",&start);
   printf("Enter ending number:\t");
   scanf("%d",&end);
   if(start>end)
   {
       c=start;
       start=end;
       end=c;
   }
   for(i=start;i<=end;i++)
   {
       if(i%2==0)
       {
           sum=sum+i;
       }
   }
   printf("The sum of even numbers between %d and %d is %d",start,end,sum);
}

