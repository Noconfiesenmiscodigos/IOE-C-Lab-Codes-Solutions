/* Write a program to do the following
a) Get input of two float numbers in to variables x & y. receive the mathematical operator (+, -, *, /) using unformatted I/O into the variable Ch1 and perform operations on x & y and display the result.
b) Define the math operator '+' as PLUS, '-' as MINUS, '*' as MULT & '/' as DIVIDE using preprocessor directives and do the operations over variables (x,y) defined on above question like z=x PLUS y.
c) Get input of your name, address, age in years, weight and height from keyboard and display the information using unformatted I/O (String I/O).
*/
#include<stdio.h>//b
#include<conio.h>
#define PLUS +
#define MINUS -
#define MULT *
#define DIVIDE /
int main()
{
    float x,y,result;
    char ch1;
    printf("Enter any two number:\t");
    scanf("%f%f",&x,&y);
    printf("\nEnter the mathematical opeartor (+,-,*,/):\t");
    ch1=getche();
    switch(ch1)
    {
    case '+':
        result=x PLUS y;
        printf("\nSum=%f",result);
        break;
    case '-':
        result=x MINUS y;
        printf("\nDifference=%f",result);
        break;
    case '*':
        result=x MULT y;
        printf("\nProduct=%f",result);
        break;
    case '/':
        result=x DIVIDE y;
        printf("\nquotient=%f",result);
        break;
    default:
        printf("\nEnter valid mathematical operator");
    }
    return 0;
}







