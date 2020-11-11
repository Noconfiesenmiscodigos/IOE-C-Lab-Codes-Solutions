/*Two concentric circles having center point at (100,100). The inner circle should have radius 50 and outer have 75 pixels.*/
#include <graphics.h>//change extension to .cpp if graphics.h is not working in .c extension
int main()
{
    initwindow(1366,768);
    int i;
    setcolor(LIGHTBLUE);
    circle(100,100,50);//circle(h,k,r)
    setcolor(LIGHTGREEN);
    circle(100,100,75);
    getch();
    closegraph();
    return 0;
}
