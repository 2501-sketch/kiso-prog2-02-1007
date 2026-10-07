#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 20; i++) {
        if (i % 10 == 0) {
            printf("%2d: ウサギは休憩中です\n", i);
        } else {
            printf("%2d: %s\n", i, (i % 2 == 0) ? "ウサギ" : "カメ");
        }
    }

    return 0;
}
