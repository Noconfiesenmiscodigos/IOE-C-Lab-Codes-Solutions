/*Write a program to show programming examples with union and enumerations.*/
#include<stdio.h>// enumerations
#include<conio.h>
 enum days {sun=1,mon,tue,wed,thru,fri,sat};
typedef enum days days;
int main()
{
    int n;
    days d;
    printf("Enter day as sun=1 , mon=2 , tue=3.......sat=7:\t");
    scanf("%d",&d);
    if(d==sat)
    {
        printf("\nHoliday");
    }
    else
    {
        printf("\nWorking day");
    }
    getch();
    return 0;
}


