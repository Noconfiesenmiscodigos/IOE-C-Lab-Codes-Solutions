/*WAP to find all factors of a number.*/
#include <stdio.h>
#include <math.h>
int main()
{
    long long int a,b,c=0,i;
    printf("\n\t\t\t\tTo find factors of a number enter the number: ");
    scanf("%lli",&a);
    printf("\n\t\t\t\tFactors are: \n");
    if (a%2==0) b=a/2;
    else b=(a-1)/2;
    for(i=1; i<=b; i++)
    {
        if (a%i==0)
        {
            printf("\t\t\t\t\t\t%lli\n",i);/*find factor of smallest number in array*/
        }
    }
    printf("\t\t\t\t\t\t%lli\n",a);
    return 0;
}

