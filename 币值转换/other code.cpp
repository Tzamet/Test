#include <stdio.h>
int main()
{
    char letter[9] = { '\0','S','B','Q','W','S','B','Q','Y' };
    int money;
    int len = 0, digit[10] = { 0 }; 

    scanf("%d", &money);

    if (money == 0 || money == 1)
    {
        printf("a"); 
    }
    while (money)
    {
        digit[len++] = money % 10;
        money /= 10;
    }
    for (int i = len - 1; i >= 0; i--)
    {
        if (digit[i])           
        {
            printf("%c%c", digit[i] + 'a', letter[i]);
        }
        else if (i == 4)
        {
            if (digit[5] || digit[6] || digit[7])
            {
                printf("W"); 
            } 
        }
        else if (i - 1 >= 0 && digit[i - 1])
        {
            printf("a"); 
        }
    }

    return 0;
}