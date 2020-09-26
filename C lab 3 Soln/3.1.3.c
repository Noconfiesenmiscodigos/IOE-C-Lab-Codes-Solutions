/* Write a program to do the following
a) Get input of two float numbers in to variables x & y. receive the mathematical operator (+, -, *, /) using unformatted I/O into the variable Ch1 and perform operations on x & y and display the result.
b) Define the math operator '+' as PLUS, '-' as MINUS, '*' as MULT & '/' as DIVIDE using preprocessor directives and do the operations over variables (x,y) defined on above question like z=x PLUS y.
c) Get input of your name, address, age in years, weight and height from keyboard and display the information using unformatted I/O (String I/O).
*/
#include<stdio.h>//c
#include<conio.h>
int main()
{
    char name[20],add[30],age[2],weight[3],height[4];
    printf("Enter your name:\t");
    gets(name);
    printf("Enter your address:\t");
    gets(add);
    printf("Enter your age:\t");
    gets(age);
    printf("Enter your weight:\t");
    gets(weight);
    printf("Enter your height:\t");
    gets(height);
    system("cls");
    puts(name);
    puts(add);
    puts(age);
    puts(weight);
    puts(height);
    return 0;

}
