#include <iostream>
#include <string>
#include <algorithm>

int main(void) {

    std::string n1, n2;

    std::cin>>n1>>n2;
    std::reverse(n1.begin(), n1.end());
    int N1 = atoi(n1.c_str());

    std::reverse(n2.begin(), n2.end());
    int N2 = atoi(n2.c_str());
    
    printf("%d\n", N1 > N2 ? N1 : N2);


    return 0;
}
