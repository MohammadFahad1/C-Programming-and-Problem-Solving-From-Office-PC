#include <stdio.h>

int main()
{
    float x, p;
    scanf("%f %f", &x, &p);
    printf("%0.2f", p / (1 - (x / 100)));
    return 0;
}