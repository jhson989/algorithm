#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef struct local {
    int i;
    int j;
    int num;
} lo;

string s1, s2;
vector<lo> m;

int search(int I, int J) {

    int max = 0;
    for (auto iter=m.begin(); iter!=m.end(); iter++) {
        if ( (iter->i < I) && (iter->j < J) ) {
            max = max > iter->num ? max : iter->num;
        }
    }
    return max;

}

int main(void) {

    cin >> s1 >> s2;
    int n1=s1.size(), n2=s2.size();

    for (int i=0; i<n1; i++) {
        for (int j=0; j<n2; j++) {
            if (s1[i] == s2[j]) {
                lo now = {i, j, 1 + search(i, j)};
                m.push_back(now);
            }
        }
    }

    int max = 0;
    for (auto iter=m.begin(); iter!=m.end(); iter++) {
        max = max > iter->num ? max : iter->num;
    }
    printf("%d\n", max);
    return 0;
}