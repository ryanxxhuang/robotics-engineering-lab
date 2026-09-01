#include <iostream>
int main() {

    std::cout << 3 + 4 << '\n';
    std::cout << 3 + 4 - 5 << '\n';
    std::cout << 2 + 3 * 4 << '\n';
    std::cout << (2 + 3) * 4 << '\n';
    
    int x{2};
    std::cout << (x = 5) << '\n';
    std::cout << "x is now " << x << '\n';

    return 0;
}