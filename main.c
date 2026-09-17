#include <stdio.h>

int main(void) 
{
    char c, d;

    printf("enter a character: ");
    scanf("%c", &c);

    d=c+1;

    printf("the next character of %c (%i) is %c (%i)", c, c, d, d);

    return 0;
}