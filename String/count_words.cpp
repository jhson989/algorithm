#include <cstdio>

int main(void) {

    int num=0;
    char pre=' ', e=' ';

    while (true) {
        scanf("%c", &e);
        if (e == '\n')
            break;
        if (pre == ' ' && e != ' ')
            num++;
        pre = e;
    }

    printf("%d\n", num);

    return 0;
}
