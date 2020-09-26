/*Print the value of y for given x=2 & z=4 and analyze the output.
 a. y = x++ + ++x; (=6)
 b. y=++x + ++x; (=8)
 c. y= ++x + ++x + ++x; (=13)
 d. y = x>z; (=0)
 e. y= x>z? x:z; (=4) 
 f. y =x&z;(=0)
 g. y= x>>2 + z<<1; (=0)*/
#include<stdio.h>//c
#include<conio.h>
int main()
{
int x,y,z;
x=2,z=4;
y= ++x + ++x + ++x;
printf("%d",y);
return 0;
}



