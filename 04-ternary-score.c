#include <stdio.h>

int main(void)
{
    int score = 75;
    int point = (score >= 60) ? 10 : 0;

    printf("%d\n", point);
    return 0;
}
