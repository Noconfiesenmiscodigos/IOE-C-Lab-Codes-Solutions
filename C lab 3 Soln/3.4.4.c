/*Given the three numbers a(=8), b(=4),c and constant value PI=3.1415, calculate and display the following result using macros (preprocessor directives)
a) c = PI * mult(a,b) //the macro mult(a,b) perform the multiplication of a & b(a*b)
b) c= PI* sum(a,b) //the macro mult(a,b) perform the sum of a & b (a+b)
c) c= PI *sub(a,b) //the macro mult(a,b) perform the subtraction of a & b (a-b)
d) c= PI*div(a,b) //the macro mult(a,b) perform the division of a & b (a/b)
*/
#include<stdio.h>//d
#include<conio.h>
#define PI 3.1415
#define div(x,y)(x/y)
int main()
{
    int a=8,b=4;
    float c;
    c=PI*div(a,b);
    printf("%f",c);
     return 0;
}

