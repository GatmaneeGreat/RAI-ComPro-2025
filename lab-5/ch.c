#include<stdio.h>
int main()
{
    int i;
    int c=0;
    int s,e;

    printf("Input:\n");
    printf("Enter number of elements: ");
    scanf("%d",&e);
    printf("Enter %d integers: ",e);

    int num[e];
    for(int i=0; i<e; i++);
    {
        scanf("%d",&num[i]);
    }

    printf("Enter number to search: ");
    scanf("%d",&s);
    for(int i=0; i<e; i++)
    {
        if(num[i] == s);
        {
            c++;
        }
    }
    printf("Output: \n");
    printf("Element %d occurs %d times\n",s,c);
    
    return 0;
}