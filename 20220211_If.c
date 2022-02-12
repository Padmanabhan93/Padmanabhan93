#include <stdio.h>

int main()
{
    int a;
    printf("\nEnter a num:\n");
    scanf("%d", &a);
    {
        if (a <= 55)
        {
            if (a < 25)
            {
                printf("given number between 0 to 24");
            }
            else
            {
                printf("given number between 25 to 55");
            }
        }
        return 0;
    }