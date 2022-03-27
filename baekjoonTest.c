#include <stdio.h>

int main()
{
    int a, b, m1, m2, m3, m4;
    scanf("%d %d", &a, &b);
    m1 = a * (b % 10);
    m2 = a * ((b % 100)/10);
    m3 = a * (b / 100);
    m4 = a * b;
    printf("%d\n%d\n%d\n%d\n", m1, m2, m3, m4);
    
    return 0;
}