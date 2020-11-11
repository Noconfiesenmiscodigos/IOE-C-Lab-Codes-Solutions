/*A circle having radius 100 pixels and center at point (150,250).*/
#include <graphics.h>//change extension to .cpp if graphics.h is not working in .c extension
int main()
{
    initwindow(1366,768);
    int i;
    setcolor(LIGHTBLUE);
    circle(150,250,100);//circle(h,k,r)
    getch();
    closegraph();
    return 0;
}


