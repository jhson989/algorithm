#include <cstdio>
#include <stack>


int main(void) {

    char w;

    while (true) {
        bool ok = true;
        scanf("%c", &w);
        if (w == '.')
            break;
        std::stack<char> s;

        do {
            if (w=='(' || w=='[') {
                s.push(w);
            }
            if (w==')') {
                if (s.empty()!=true && s.top()=='('){
                    s.pop();
                } else {
                    ok = false;
                }
            }
            if (w==']') {
                if (s.empty()!=true && s.top()=='['){
                    s.pop();
                } else {
                    ok = false;
                }
            }

            scanf("%c", &w);
        } while (w!='.') ;


        if (ok==true && s.empty())
            printf("yes\n");
        else
            printf("no\n");

        scanf("%c", &w);
    }
    return 0;
}
