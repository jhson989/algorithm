#include <iostream>
#include <string>

int main(void) {

    char m[26];
    std::string word;

    std::fill_n(m, 26, -1);
    std::cin >> word;

    for (int i=word.size()-1; i>=0; i--) {
        m[(int)(word[i]-'a')] = i;
    }

    for (int i=0; i<26; i++)
        printf("%d ", m[i]);

    return 0;
}