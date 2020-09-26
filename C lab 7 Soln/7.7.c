/*WAP to find transpose of a 3*3 matrix.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int m,n,i,j;
    printf("Enter dimension of matrix(m,n):\t");
    scanf("%d%d",&m,&n);
    int mat[m][n];
      for (i=0;i<m;i++)
            {
                for (j=0;j<n;j++)
                {
                   printf("\nEnter the value of a(%d,%d):\t",(i+1),(j+1));
                   scanf("%d",&mat[i][j]);
                }

            }
            printf("\n\nTranspose:\n");
            for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%d\t",mat[j][i]);
            }

                printf("\n");
        }

        getch();
        return 0;


}



