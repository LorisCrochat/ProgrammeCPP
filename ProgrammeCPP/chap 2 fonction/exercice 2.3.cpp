#include <iostream>

bool estRoutable(unsigned char octet1, unsigned char octet2, unsigned char octet3, unsigned char octet4) {
    if (octet1 == 10 || (octet1 == 172 && (octet2 >= 16 && octet2 <= 31)) || (octet1 == 192 && octet2 == 168)) {
        return false;
    } else {
        return true;
    }
}

int main() {
    std::cout << "Adresse 10.0.0.1 est-elle routable ? " << (estRoutable(10, 0, 0, 1) ? "Oui" : "Non") << std::endl;
    std::cout << "Adresse 172.16.0.1 est-elle routable ? " << (estRoutable(172, 16, 0, 1) ? "Oui" : "Non") << std::endl;
    std::cout << "Adresse 192.168.0.1 est-elle routable ? " << (estRoutable(192, 168, 0, 1) ? "Oui" : "Non") << std::endl;
    std::cout << "Adresse 8.8.8.8 est-elle routable ? " << (estRoutable(8, 8, 8, 8) ? "Oui" : "Non") << std::endl;
    return 0;
}