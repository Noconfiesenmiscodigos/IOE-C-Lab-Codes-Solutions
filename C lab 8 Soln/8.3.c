/*Write a program to swap value of two variables using function & pointer.*/

#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
int main()

{
    int n1,n2;
    printf("Enter two number:\t");
    scanf("%d %d",&n1,&n2);
    printf("\n Before swapping a=%d, b=%d",n1,n2);
    swap(&n1,&n2);
    printf("\n After swapping a=%d, b=%d",n1,n2);
    getch();
    return 0;


}

void swap(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}



