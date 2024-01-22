#include <iostream>

char classe(unsigned char octet1, unsigned char octet2, unsigned char octet3, unsigned char octet4) {
    if (octet1 >= 0 && octet1 <= 126) {
        return 'A';
    } else if (octet1 >= 128 && octet1 <= 191) {
        return 'B';
    } else if (octet1 >= 192 && octet1 <= 223) {
        return 'C';
    } else if (octet1 >= 224 && octet1 <= 239) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    std::cout << "Classe de l'adresse IP 192.168.0.1 : " << classe(192, 168, 0, 1) << std::endl;
    std::cout << "Classe de l'adresse IP 10.0.0.1 : " << classe(10, 0, 0, 1) << std::endl;
    std::cout << "Classe de l'adresse IP 172.16.0.1 : " << classe(172, 16, 0, 1) << std::endl;
    std::cout << "Classe de l'adresse IP 240.0.0.1 : " << classe(240, 0, 0, 1) << std::endl;
    return 0;
}