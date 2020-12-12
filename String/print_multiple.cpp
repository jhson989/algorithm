#include <cstdio>

int main(void) {

    int T, n;
    char w;

    scanf("%d", &T);
    scanf("%c", &w);

    while (T--) {
        scanf("%d", &n);

        while (true) {
            scanf("%c", &w);

            if (w == '\n')
                break;
            if (w == ' ')
                continue;
            for (int i=0; i<n; i++)
                printf("%c", w);
        }
        printf("\n");
    }


    return 0;
}
