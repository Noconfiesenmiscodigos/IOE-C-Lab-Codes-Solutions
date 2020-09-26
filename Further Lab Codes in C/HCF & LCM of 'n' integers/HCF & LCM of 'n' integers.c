/*WAP to find HCF & LCM of 'n' integers*/
#include <conio.h>
int main()
{
    long long int i,j,n,a,b,c,d;
    printf("\n\t\t\t\tTo find HCF & LCM of 'n' integer numbers enter 'n'.  ");
    scanf("%lli",&n);
    long long int number[n];/*contains all input numbers*/
    for(i=0; i<n; i++)
    {
        printf("\n\t\t\t\tEnter %lli th number: ",i+1);
        scanf("%lli",&number[i]);
    }
    a = number[0];
    b = number[0];
    for(i=0; i<n; i++)
    {
        if (b>number[i]) b=number[i];/*find smallest number in array*/
        if (a<number[i]) a=number[i];/*find greatest number in array*/
    }
    c=0;
    j=b;
    do
    {
        d=0;
        for(i=0; i<n; i++)
        {
            if (number[i]%j!=0) break;
            else d++;
        }
        if (d==n)
        {
            printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            printf("\n\t\t\t\tHCF = %lli\n",j);
            printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            c=1;
        }
        j--;
    }
    while(c!=1);
    c=0;
    j=1;
    do
    {
        b=0;
        for(i=0; i<n; i++)
        {
            if ((a*j)%number[i]!=0) break; /*In LCM n1*a1=n2*a2=n3*a3.*/
            else b++;
        }
        if (b==n)
        {
            printf("\n\t\t\t\tLCM = %lli\n",a*j);
            printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            c=1;
        }
        j++;
    }
    while(c!=1);
}

