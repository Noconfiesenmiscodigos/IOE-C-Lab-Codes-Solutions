/*An ellipse having xRadius=100, yRadius=50 and center atpoint (100, 50).*/
#include <graphics.h>//change extension to .cpp if graphics.h is not working in .c extension
int main()
{
    initwindow(1366,768);
    int i;
    setcolor(LIGHTBLUE);
    ellipse(100,50,0,360,100,50);//ellipse(int x, int y, int start_angle, int end_angle, int x_radius, int y_radius)
    getch();
    closegraph();
    return 0;
}
