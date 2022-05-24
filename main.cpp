#include <iostream>
#include <algorithm>
#include "funcs.h"
int main() {
    std::cout << "Hello, World!" << std::endl;

    std::vector<int> a = {1, 2, 1, 1, 2, 3, 4};

    std::cout << is_sorted(a.begin(), a.end());
}
