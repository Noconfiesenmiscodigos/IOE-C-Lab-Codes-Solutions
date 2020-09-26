/*Write a program to multiply two 3*3 matrix.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int m1,m2,n1,n2,i,j,k;
    printf("Enter the dimension of first matrix (m,n):\t");
    scanf("%d%d",&m1,&n1);
    int mat1[m1][n1];
    printf("\nEnter the dimension of second matrix (m,n):\t");
    scanf("%d%d",&m2,&n2);
    int mat2[m2][n2];
    int prod[m1][n2];
    for(i=0;i<m1;i++)
    {
        for (j=0;j<n2;j++)
        {
            prod[i][j]=0;
        }
    }
    if (n1==m2 && (n1&&n2&&m1&&m2!=0))
    {
        printf("\n\nFor matrix 1:\n");
           for (i=0;i<m1;i++)
            {
                for (j=0;j<n1;j++)
                {
                   printf("\nEnter the value of a(%d,%d):\t",(i+1),(j+1));
                   scanf("%d",&mat1[i][j]);
                }

            }



            printf ("\n\nFor matrix 2:\n");
           for (i=0;i<m2;i++)
            {
                for (j=0;j<n2;j++)
                {
                   printf("\nEnter the value of a(%d,%d):\t",(i+1),(j+1));
                   scanf("%d",&mat2[i][j]);
                }

            }



        for(i=0;i<m1;i++)
        {
            for(k=0;k<n2;k++)
            {
                for (j=0;j<m2;j++)
                {
                    prod[i][k]=prod[i][k]+(mat1[i][j]*mat2[j][k]);
                }
            }
        }
        printf("\n\nProduct:\n");
    for(i=0;i<m1;i++)
        {
            for(k=0;k<n2;k++)
            {
                printf("%d\t",prod[i][k]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("\n\nInvalid dimension for multiplication!!");
    }
    getch();
    return 0;
}

