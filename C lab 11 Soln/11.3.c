/*A rectangle which has left top corner point at (50, 75) and right bottom point at (200,250).*/
#include <graphics.h>//change extension to .cpp if graphics.h is not working in .c extension
int main()
{
    initwindow(1366,768);
    int i;
    setcolor(LIGHTBLUE);
    rectangle(50,75,200,250);//rectangle(int left, int top, int right, int bottom);
    getch();
    closegraph();
    return 0;
}
