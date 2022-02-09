#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    printf("\nEnter the 2 num:\n");
    scanf("%d%d", &a,&b);

    c=a++;
    d=++a;
    e=a--;
    f=--a;
    g=b++;
    h=++b;
    i=b--;
    j=--b;

    printf("\n given 2 numbers are a=%d b=%d",a,b);
    printf("\n a++ is =%d",c);
    printf("\n ++a is =%d",d);
    printf("\n a-- is =%d",e);
    printf("\n --a is =%d",f);
    printf("\n b++ is =%d",g);
    printf("\n ++b is =%d",h);
    printf("\n b-- is =%d",i);
    printf("\n --b is =%d",j);

    return 0;


}