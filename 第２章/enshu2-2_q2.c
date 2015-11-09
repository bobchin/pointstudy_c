#include <stdio.h>

int main(void)
{
    float a, b;
    double c;
    long seki;
    int i = 180;
    int j = 500;
    char ch = 'S';

    a = 62.5;
    b = 23.3;

    c = a * b;
    seki = (long)i * j;

    printf("ch = %c\n", ch);
    printf("c = %f\n", c);
    printf("seki = %ld\n", seki);

    return 0;
}
