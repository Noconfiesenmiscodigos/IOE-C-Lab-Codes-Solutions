/*Write a program to input marks of 5 subjects 
(Physics, Chemistry, Math, English& Biology) 
for a student. Display the rank of each subjects and also 
the result of total marks and percentage obtained with his/her 
rank in the class. The rank is categorized as fail (marks < 40%), 
pass & third division (marks between 40 to 55%), second (marks between 55 to 65%), 
first (marks between 65 to 80%), Distinction (marks between 80 to 95%), extra ordinary 
(marks above 95 to 100%).*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    float p,c,b,m,e,percent;
    printf("Enter your marks in physics:\t");
    scanf("%f",&p);
    printf("\nEnter your marks in chemistry:\t");
    scanf("%f",&c);
    printf("\nEnter your marks in biology:\t");
    scanf("%f",&b);
    printf("\nEnter your marks in math:\t");
    scanf("%f",&m);
    printf("\nEnter your marks in english:\t");
    scanf("%f",&e);
    system("cls");


    /*Determining rank for physics*/
    if(p<40)
    {
        printf("\nYou failed in physics");
    }
    else if(p>=40&&p<55)
    {
        printf("\nyou've passed in physics and your rank is third division");
    }
    else if(p>=55&&p<65)
    {
        printf("\nyou've passed in physics and your rank is second division");
    }
    else if(p>=65&&p<80)
    {
        printf("\nyou've passed in physics and your rank is first division");
    }
    else if(p>=80&&p<95)
    {
        printf("\nyou've passed in physics and your rank is distinction");
    }
    else if(p>=95&&p<=100)
    {
        printf("\nyou've passed in physics and your rank is extraordinary");
    }



    /*Determining rank for chemistry*/

        if(c<40)
    {
        printf("\nYou failed in chemistry");
    }
    else if(c>=40&&c<55)
    {
        printf("\nyou've passed in chemistry and your rank is third division");
    }
    else if(c>=55&&c<65)
    {
        printf("\nyou've passed in chemistry and your rank is second division");
    }
    else if(c>=65&&c<80)
    {
        printf("\nyou've passed in chemistry and your rank is first division");
    }
    else if(c>=80&&c<95)
    {
        printf("\nyou've passed in chemistry and your rank is distinction");
    }
    else if(c>=95&&c<=100)
    {
        printf("\nyou've passed in chemistry and your rank is extraordinary");
    }



    /*Determining rank for math*/
       if(m<40)
    {
        printf("\nYou failed in math");
    }
    else if(m>=40&&m<55)
    {
        printf("\nyou've passed in math and your rank is third division");
    }
    else if(m>=55&&m<65)
    {
        printf("\nyou've passed in math and your rank is second division");
    }
    else if(m>=65&&m<80)
    {
        printf("\nyou've passed in math and your rank is first division");
    }
    else if(m>=80&&m<95)
    {
        printf("\nyou've passed in math and your rank is distinction");
    }
    else if(m>=95&&m<=100)
    {
        printf("\nyou've passed in math and your rank is extraordinary");
    }



    /*Determining rank for biology*/
       if(b<40)
    {
        printf("\nYou failed in biology");
    }
    else if(b>=40&&b<55)
    {
        printf("\nyou've passed in biology and your rank is third division");
    }
    else if(b>=55&&b<65)
    {
        printf("\nyou've passed in biology and your rank is second division");
    }
    else if(b>=65&&b<80)
    {
        printf("\nyou've passed in biology and your rank is first division");
    }
    else if(b>=80&&b<95)
    {
        printf("\nyou've passed in biology and your rank is distinction");
    }
    else if(b>=95&&b<=100)
    {
        printf("\nyou've passed in biology and your rank is extraordinary");
    }



    /*Determining rank for english*/
       if(e<40)
    {
        printf("\nYou failed in english");
    }
    else if(e>=40&&e<55)
    {
        printf("\nyou've passed in english and your rank is third division");
    }
    else if(e>=55&&e<65)
    {
        printf("\nyou've passed in english and your rank is second division");
    }
    else if(e>=65&&e<80)
    {
        printf("\nyou've passed in english and your rank is first division");
    }
    else if(e>=80&&e<95)
    {
        printf("\nyou've passed in english and your rank is distinction");
    }
    else if(e>=95&&e<=100)
    {

        printf("\nyou've passed in english and your rank is extraordinary");
    }
    printf("\n\n************************************************************");
    percent=(p+c+b+m+e)/5;
    printf("\n Your percentage is %f",percent);
    if(p<40||b<40||c<40||m<40||e<40)        /*Student will be failed if he/she fails atleast in one subject*/
    {
        printf("\nYou failed in exam");
    }
    else
    {

             if(percent<40)
            {
                printf("\nYou failed in exam");
            }
            else if(percent>=40&&percent<55)
            {
                printf("\nyou've passed in exam and your rank is third division");
            }
            else if(percent>=55&&percent<65)
            {
                printf("\nyou've passed in exam and your rank is second division");
            }
            else if(percent>=65&&percent<80)
            {
                printf("\nyou've passed in exam and your rank is first division");
            }
            else if(percent>=80&&percent<95)
            {
                printf("\nyou've passed in exam and your rank is distinction");
            }
            else if(percent>=95&&percent<=100)
            {
                printf("\nyou've passed in exam and your rank is extraordinary");
            }
    }
    return 0;

}

