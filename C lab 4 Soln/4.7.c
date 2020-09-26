/*Write a program to read the values of coefficients a, b and c 
of a quadratic equation ax2+bx+c=0 and find roots of the equation.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   float a,b,c,d,root1,root2;
   printf("Enter the value of a,b,c:\t");
   scanf("%f%f%f",&a,&b,&c);
   d=(b*b)-4*a*c;
   if (d>=0)
   {
       root1=(-b+sqrt(d))/(2*a);
       root2=(-b-sqrt(d))/(2*a);
       printf("\nThe root of the equation are %f and %f",root1,root2);

   }
   else
   {
       d=d*(-1);
       root1=sqrt(d)/(2*a);
       printf("The root of the equation are:\n%f+i(%f)",(-b/(2*a)),root1);
       printf("\n%f-i(%f)",(-b/(2*a)),root1);
   }
  return 0;
}



