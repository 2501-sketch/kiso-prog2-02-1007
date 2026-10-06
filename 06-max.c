#include <stdio.h>

int main(void)
{
    int a = 8;
    int b = 3;
    int max = (a > b) ? a : b;

    printf("%d\n", max);
    return 0;
}
