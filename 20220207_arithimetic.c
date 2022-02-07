#include<stdio.h>

int main()
{
    float a,b,c,d,e,f,g,h;
    int i,j;
    printf("\nenter the three values:\n");
    scanf("%f%f%f",&a,&b,&c);
    printf("\nenter the two int values:\n");
    scanf("%d%d",&i,&j);

    d=a+b+c;
    e=a-b-c;
    f=a*b*c;
    g=a/b/c;
    h=i%j;

    printf("\nGiven 3 numbers are = %0.2f %0.2f %0.2f",a,b,c);
    printf("\nAddition of the 3 numbers are = %0.2f",d);
    printf("\nsubtraction of the 3 numbers are = %0.2f",e);
    printf("\nmultiplication of the 3 numbers are = %0.2f",f);
    printf("\ndivision of the 3 numbers are= %0.2f",g);
    printf("\nGiven 2 int numbers are = %d %d",i,j);
    printf("\nmodulous of the given 2 numbers are= %d",h);
    return 0;
}