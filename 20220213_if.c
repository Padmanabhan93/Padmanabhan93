#include <stdio.h>

int main()
{
    int days;
    printf("\nenter the days:\n");
    scanf("%d", &days);

    if (days >= 1 && days <= 5)
    {
        printf("fine amount was 50 paise.");
    }
    else if (days >=6 && days <= 10)
    {
        printf("fine amount was 1 rupee.");
    }
    else if (days >=10 && days <= 30)
    {
        printf("fine amount was 5 rupees.");
    }
    else if (days >30)
    {
        printf("your membership will be cancelled.");
    }
    return 0;
}