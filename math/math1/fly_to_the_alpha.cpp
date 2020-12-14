#include <cstdio>
int ts;
unsigned int x, y, d, remain;

int main(void) {

    scanf("%d", &ts);

    while (ts--) {
        scanf("%u %u", &x, &y);
        d = y-x;
        int idx = 0;
        while ((idx+1)*(idx+1) <= d) {
            idx++;
        }
        remain = d-((unsigned int)idx*idx);

        printf("idx: %d, remain: %u\n", idx, remain);

        if (remain == 0) {
            printf("%d\n",2*idx-1);
            continue;
        }
        if (remain <= idx) {
            printf("%d\n",2*idx);
            continue;
        }
        printf("%d\n",2*idx+1);
    }

    return 0;
}
