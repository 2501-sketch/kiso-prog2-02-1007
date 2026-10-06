#include <stdio.h>

int main(void)
{
    int score = 75;
    int point;

    if (score >= 60) {
        point = 10;
    } else {
        point = 0;
    }

    printf("%d\n", point);
    return 0;
}
