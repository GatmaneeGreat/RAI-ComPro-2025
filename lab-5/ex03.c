#include<stdio.h>
int main()
{
    int Marks[5];
    int i=0;
    int Total;
    int Heighest;
    int max=0;

    for(int i=0; i<5; i++)
    {
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d",&Marks[i]);
        Total += Marks[i];

        if(Marks[i]>max)
        {
            max=Marks[i];
        }
    }
    printf("Total Marks: %d\n",Total);
    printf("Heighest Marks: %d\n",max);

    return 0;
}