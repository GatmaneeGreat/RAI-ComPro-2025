#include<stdio.h>
int main()
{
    int inte1;
    int inte2;
    int inte3;
    char ch;
    int min;
    int max;
    float average;
    int sum;

    printf("Enter integer #1 : ");
    scanf("%d%c",&inte1,&ch);

    printf("Enter integer #2 : ");
    scanf("%d%c",&inte2,&ch);

    printf("Enter integer #3 : ");
    scanf("%d%c",&inte3,&ch);

    if(inte1 <= inte2 && inte1<= inte3)
    {
        min = inte1;
    }
    else if (inte2 <= inte1 && inte2 <= inte3){
        min = inte2;
    }
    else {
        min = inte3;
    }
    printf("Result: \n");
    printf("Minimum :%d \n",min);
    if(inte1 >= inte2 && inte1 >= inte3)
    {
        max = inte1;/* code */
    }
    else if (inte2 >= inte1 && inte2 >= inte3){
        max = inte2;
    }
    else {
        max = inte3;
    }
    printf("Maximim :%d \n",max);
    sum = (inte1 + inte2 + inte3);
    printf("sum: %d\n",sum);
    average = (float)(sum)/3;
    printf("average: %.2f\n",average);

    return 0;
}