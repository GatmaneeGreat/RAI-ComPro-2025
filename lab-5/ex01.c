#include<stdio.h>
int main()
{
    int values[10];

    for(int n=0; n<10; n++)
    {
        printf("Enter the values %d here: ", 1+n);
        scanf("%d",&values[n]);
    }

    printf("Values in array are: ");
    for(int i = 0; i < 10; i++)
    {

        if (i == 9) {
            printf("%d\n", values[i]);
        }

        else {
            printf("%d, ", values[i]);
        }
    }
    return 0;
}