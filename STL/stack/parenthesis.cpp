#include <cstdio>
#include <stack>

int main(void) {

    char w;
    int ts;
    scanf("%d", &ts);
    scanf("%c", &w);
    while (ts--) {
        std::stack<char> s;
        bool isOK = true;
        while (true) {
            scanf("%c", &w);
            if (w == '\n')
                break;

            if (w == '(') {
                s.push('(');
            }
            else if (w == ')') {
                if (s.empty()) {
                    isOK = false;
                } else {
                    s.pop();
                }
            }
        } 
        if (isOK && s.empty()) 
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
