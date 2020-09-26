/*Write a program to enter two Cartesian coordinate points and display 
the distance between them.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
struct coordinate
{
    int x[2];
    int y[2];
};
int main()
{
    float d;
    struct coordinate p;
    printf("Enter the coordinate of first point (x1,y1): ");
    scanf("%d%d",&p.x[1],&p.y[1]);
     printf("Enter the coordinate of second point (x2,y2): ");
    scanf("%d%d",&p.x[2],&p.y[2]);

    d=sqrt(pow((p.x[2]-p.x[1]),2)+pow((p.y[2]-p.y[1]),2));
    printf("\nDistance between the point = %f",d);
    getch();
    return 0;

}


