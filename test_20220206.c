#include<stdio.h>

int main()
{
    int a,b,c;
    printf("\nenter the value of A & B :\n");
    scanf("%d%d", &a,&b);
    c=a>=b?a:b;
    printf("\nbiggest number is:%d",c);
    return 0;
    
}