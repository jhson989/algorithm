#include <cstdio>

int x, y, w, h;

int main(void) {
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int min = 1000;
    min = min < x-0 ? min : x-0;
    min = min < y-0 ? min : y-0;
    min = min < w-x ? min : w-x;
    min = min < h-y ? min : h-y;

    printf("%d\n", min);
    return 0;
}
