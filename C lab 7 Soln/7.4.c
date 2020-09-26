/*WAP to enter 5 elements and display them in ascending and descending order.*/
#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
int main()
{
    int count,j,i;
    printf("How many numbers to be added in the array:\t");
    scanf("%d",&count);
    int num[count];
    for (i=0;i<count;i++)
    {
        j=i;
        printf("\nEnter number for num[%d]:\t",j);
        scanf("%d",&num[j]);
        if(j>0)
        {
            if(num[j]>num[j-1])
            {
                do
                {
                    swap(&num[j],&num[j-1]);
                    j=j-1;
                    if(j==0)
                        break;
                }while(num[j]>num[j-1]);
            }
        }
    }

    printf("\n\nIn descending order:");
    for (i=0;i<count;i++)
    {
        printf("  %d",num[i]);
    }
    printf("\n\nIn ascending order:");
    for (i=(count-1);i>=0;i--)
    {
        printf("  %d",num[i]);
    }
    getch();
    return 0;
}

void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}


