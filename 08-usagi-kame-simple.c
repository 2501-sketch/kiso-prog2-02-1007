#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 20; i++) {
        printf("%2d: %s\n", i, (i % 2 == 0) ? "ウサギ" : "カメ");
    }
    return 0;
}
