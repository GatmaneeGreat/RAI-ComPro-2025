#include<stdio.h>
int main()
{
    int r,c;
    int mat[3][3]={{1,-1,2},{0,2,4},{-1,3,5}};

    printf("Transpose of A = \n");

    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {
            printf("%5d",mat[r][c]);
        }

        printf("\n");
    }
    return 0;
}