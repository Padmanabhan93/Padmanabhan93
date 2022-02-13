#include <stdio.h>

int main()
{
    int a;
    printf("\nEnter a  number:\n");
    scanf("%d", &a);
    if (a%2==0)
    {
        printf("\nEntered value is even number :");
    }
    else
    {
        printf("\nEntered value is odd number :");
    }
    return 0;
}