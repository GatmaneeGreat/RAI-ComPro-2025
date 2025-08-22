#include<stdio.h>
int main()
{
    int values[10];
    int i=0;
    int odd=0;
    int even=0;
    int n;
    
    for(int i=0; i<10; i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&n);

        if (n %2 == 0) {
            even++;
        }

        else {
            odd++;
        }
    }
    printf("Even number:%d\n",even);
    printf("Odd number:%d\n",odd);
    return 0;
}