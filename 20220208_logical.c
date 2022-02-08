#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    printf("\nEnter the 2 num:\n");
    scanf("%d%d", &a,&b);

    c=(a==b || a!=b);
    h=(a==b && a!=b);
    d=(a<b || a<=b);
    f=(a<b && a<=b);
    e=(a>b || a>=b);
    g=(a>b && a>=b);

    printf("\n given 2 numbers are a=%d b=%d",a,b);
    printf("\n a=b and !=b is true=%d",h);
    printf("\n a=b or !=b is true=%d",c);
    printf("\n a<b or a<=b is true=%d",d);//1=true
    printf("\n a<b and a<=b is true=%d",f);//1=true
    printf("\n a>b or a>=b is true=%d",e);//0=false
    printf("\n a>b and a>=b is true=%d",g);//0=false

    return 0;


}