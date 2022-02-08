#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    printf("\nenter 2 numbers:\n");
    scanf("%d%d", &a,&b);

    a-=b;
    printf("\n result -= is = %d", a);
    a+=b;
    printf("\n result += is = %d", a);
    a*=b;
    printf("\n result *= is = %d", a);
    a/=b;
    printf("\n result /= is = %d", a);
    a%=b;
    printf("\n result %= is = %d", a);
    return 0;
}