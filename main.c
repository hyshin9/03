#include <stdio.h>

int main(void) 
{
    int a, b;
    float c;

    printf("enter the numerator: ");
    scanf("%d", &a);

    printf("enter the denominator: ");
    scanf("%d", &b);

    c=(float)a/b;

    printf("the result of division is %f.\n", c);

    return 0;
}