/*Define a structure "complex" (typedef) to read two complex numbers and 
perform addition, subtraction of these two complex numbers and display the result.*/

#include<stdio.h>
#include<conio.h>

typedef struct

{
  float real,imag;
}complex;
int main()
{
    complex n1,n2,s,d;
    printf("Enter a and b where a+ib is first complex number:\t");
    scanf("%f%f",&n1.real,&n1.imag);
    printf("Enter c and d where c+id is second complex number:\t");
    scanf(" %f%f",&n2.real,&n2.imag);
    s.real=n1.real+n2.real;
    s.imag=n1.imag+n2.imag;
    d.real=n1.real-n2.real;
    d.imag=n1.imag-n2.imag;
    printf("\n\nSum= %f + (%fi)",s.real,s.imag);
    printf("\n\nDifference= %f + (%fi)",d.real,d.imag);
    getch();
    return 0;
}



