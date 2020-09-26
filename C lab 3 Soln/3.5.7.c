/*Demonstrate the differences among getch(), getche(), 
getchar(). Demonstrate the difference between scanf() & 
gets(), printf() & puts().*/
#include<stdio.h> 
int main() 
{ 
    // % is intentionally put here to show side effects of using printf(str) 
    printf("Geek%sforGeek%s");   
    getchar(); 
    return 0; 
}


