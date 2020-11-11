/*A rectangle having a diagonal of length 100 pixels and its one end at point (10, 20).*/
#include <graphics.h>//change extension to .cpp if graphics.h is not working in .c extension
int main()
{
    initwindow(1366,768);
    int i;//taking l = 6 pixels, b = 8 pixels
    setcolor(LIGHTBLUE);//4 such rectangles are possible
    rectangle(10,20,16,28);//rectangle(int left, int top, int right, int bottom);
    setcolor(LIGHTGREEN);
    rectangle(4,12,10,20);
    setcolor(LIGHTGRAY);
    rectangle(4,20,10,28);
    setcolor(LIGHTMAGENTA);
    rectangle(10,12,16,20);
    getch();
    closegraph();
    return 0;
}
