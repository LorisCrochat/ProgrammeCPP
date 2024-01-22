#include <iostream>

unsigned long long int factorielle(unsigned int n) {
    unsigned long long int result = 1;
    for (unsigned int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    for (unsigned int i = 0; i < 10; i++) {
        std::cout << "factorielle(" << i << ") = " << factorielle(i) << std::endl;
    }
    std::cin.get();
    std::cin.ignore();
    return 0;
}
