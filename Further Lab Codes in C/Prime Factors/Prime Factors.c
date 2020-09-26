/*WAP to find all prime factors of a number.*/
#include <stdio.h>
#include <math.h>
int main()
{
    long long int a,b,c=2,i;
    printf("\n\t\t\t\tTo find prime factors of a number enter the number: ");
    scanf("%lli",&a);
    printf("\n\t\t\t\tPrime factors are: \n");
    if (a%2==0) b=a/2;
    else b=(a-1)/2;
    for(i=0; i<=b; i++)/*find prime factorization of all numbers in array (Unique factorization)*/
    {
        if (a%c==0)
        {
            a=a/c;
            printf("\t\t\t\t\t\t%lli\n",c);
            c=1;/*find repeated prime factor (Unique factorization)*/
        }
        c++;
        if (a==1) break;
    }
    return 0;
}

