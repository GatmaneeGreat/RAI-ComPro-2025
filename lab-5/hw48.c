#include<stdio.h>
int main()
{
    int A[3][3]={{-1,-4,-6},{3,16,22},{8,28,35}};
    int r,c,k;
    int sum[3][3];


    printf("A x A =");

    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {
            sum[r][c]=0;
            for(k=0; k<3; k++);
            {
                sum[r][c] += A[r][c] + A[k][c];
            }
        }
    }
    printf("\n");
    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {
            printf("%5d",sum[r][c]);
        }
        printf("\n");
    }
    return 0;
}