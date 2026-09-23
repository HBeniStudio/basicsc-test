#include <iostream>
#include "main.h"

int main() {
    const int a = 1;
    const int b = 2;
    const int result = add(a, b);

    std::cout << a << " + " << b << " = " << result << std::endl;
    int c;
    std::cin >> c;
    return 0;
}