#include<stdio.h>
int main()
{
    char ch;
    int vo=0;
    int nv=0;
    
    printf("Please enter the characters\n");

    for(int i = 0;i <= 10;++i)
    {
        printf("Character %d:",i + i);
        scanf(" %c",&ch);

        if(ch == 'a',ch == 'e',ch == 'i',ch == 'o',ch == 'u')
        {
            vo++;
        }
        else{
            nv++;
        }
    }

    printf("\nAnalysis:\n");
    printf("Number of vowel: %d\n",vo);
    printf("Number of vowel not vowel: %d\n",nv);

    return 0;
}