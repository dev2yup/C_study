#include <stdio.h>

int main(void)
{
    int a, b, c, x;
    printf("input a,b,and c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("input x: ");
    scanf("%d", &x);
    printf("f(%d) = %d", x, a * x*x + b * x + c);

    return 0;
}