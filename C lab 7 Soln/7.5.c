/*Write a program to read two matrices of order 3 * 2, add them and display 
the resultant matrix in matrix form.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int mat1[3][2],mat2[3][2];
    int i,j;
    printf("For matrix 1:\n");
    for (i=0;i<3;i++)
    {
        printf("\nEnter the value of a%d1    a%d2:\t",(i+1),(i+1));
        scanf("%d %d",&mat1[i][0],&mat1[i][1]);
    }
    printf ("\n\nFor matrix 2:\n");
       for (i=0;i<3;i++)
    {
        printf("\nEnter the value of a%d1    a%d2:\t",(i+1),(i+1));
        scanf("%d %d",&mat2[i][0],&mat2[i][1]);
    }
    printf("\n\nSum of two matrices:");
      for (i=0;i<3;i++)
    {
        printf("\n%d        %d",(mat1[i][0]+mat2[i][0]),(mat1[i][1]+mat2[i][1]));

    }
    getch();
    return 0;

}



