#include <cstdio>

int ts, H, W, N, floor, line;

int main(void) {

    scanf("%d", &ts);

    while (ts--) {

        scanf("%d %d %d", &H, &W, &N);
        floor = N%H == 0 ? H : N%H;
        line = N%H == 0 ? N/H : N/H+1;

        printf("%d%02d\n", floor, line);
    }

    return 0;
}
