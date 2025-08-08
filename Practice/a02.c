#include<stdio.h>
int main()
{
    int all,hour,minutes;

    printf("Please enter total minutes:\n");
    scanf("%d",&all);

    hour = all / 60;
    minutes = all % 60;

    printf("%d minutes is %d hour(s), and %d minutes(s)\n",all,hour,minutes);

    return 0;
}