/*Write a program to find the sum of all individual digits of the number.(using
do while loop).*/
    #include<stdio.h>
    #include<conio.h>
    int main()
{
    int num,r,sum=0;
    printf("Enter a number:\t");
    scanf("%d",&num);
    do
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }while(num>0);
    printf("\nThe sum of digits= %d",sum);
    getch();
    return 0;
}

