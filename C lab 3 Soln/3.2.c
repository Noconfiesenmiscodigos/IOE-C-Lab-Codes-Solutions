/*Write a program to produce the output as shown below:
x y expressions results
6 | 3 | x=y+3 | x=6
6 | 3 | x=y-2 | x=1
6 | 3 | x=y*5 | x=15
6 | 3 | x=x/y | x=2
6 | 3 | x=x%y | x=0
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,result;
    x=6,y=3;
    printf("%c%7c%18s%16s\n",'x','y',"expressions","results");
    printf("%d%3c%4d%4c%8s%11c%6s%d\n",x,'|',y,'|',"x=y+3",'|',"x=",(result=y+3));
    printf("%d%3c%4d%4c%8s%11c%6s%d\n",x,'|',y,'|',"x=y-2",'|',"x=",(result=y-2));
    printf("%d%3c%4d%4c%8s%11c%6s%d\n",x,'|',y,'|',"x=y*5",'|',"x=",(result=y*5));
    printf("%d%3c%4d%4c%8s%11c%6s%d\n",x,'|',y,'|',"x=x/y",'|',"x=",(result=x/y));
    printf("%d%3c%4d%4c%8s%11c%6s%d\n",x,'|',y,'|',"x=x%y",'|',"x=",(result=x%y));
    return 0;
}

