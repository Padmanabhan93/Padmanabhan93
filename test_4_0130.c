#include<stdio.h>

int main() {
    float salary;

    puts("enter your salary:");
    scanf("%f", &salary);
 
    if (salary > 10000) {
        printf("you are eligible for bonous 8.33% =%g\n", salary = salary * 8.33/100);
    } else { puts("you are not eligible for bonous");
    }

    return 0;

}