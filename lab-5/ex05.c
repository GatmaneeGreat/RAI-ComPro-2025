#include<stdio.h>
int main()
{
    int values[8];
    int sm;
    int la;
    int i=0;

    for(int i=0; i<8; i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&values[i]);
    }

    sm = values[1];
    la = values[0];

    for (int i=0; i<8; i++) 
    {
        if (values[i] > la)
            la = values[i];
        if (values[i] < sm)
            sm = values[i];
    } 

    printf("Smallest number: %d\n",sm);
    printf("Largest number: %d\n",la);

    return 0;
}