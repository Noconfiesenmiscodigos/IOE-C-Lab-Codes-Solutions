/*Write a program to print the size of int, char, float, 
double and long double data types in C*/
#include<stdio.h>
#include<conio.h>
int main()
{
   char a[10]="Nepal5";
   int b=10;
   float c=20.2;
   double d=5e60;
   long double e=100e10;
   printf("%d,%d,%d,%d,%d.",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e));
}

