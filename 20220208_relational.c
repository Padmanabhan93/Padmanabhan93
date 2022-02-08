#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    printf("\nEnter the 2 num:\n");
    scanf("%d%d", &a,&b);

    c=a==b;
    d=a<b;
    e=a>b;
    f=a<=b;
    g=a>=b;
    h=a!=b;

    printf("\n given 2 numbers are a=%d b=%d",a,b);
    printf("\n a=b is true=%d",c);
    printf("\n a<b is true=%d",d);
    printf("\n a>b is true=%d",e);//0=false
    printf("\n a<=b is true=%d",f);//1=true
    printf("\n a>=b is true=%d",g);
    printf("\n a!=b is true=%d",h);

    return 0;


}