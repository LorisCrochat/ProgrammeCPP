#include <iostream>

bool bissextile(int annee) {
    if (annee % 4 == 0 && (annee % 100 != 0 || annee % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    std::cout << "2014 était-elle bissextile ? " << (bissextile(2014) ? "Oui" : "Non") << std::endl;
    std::cout << "2000 était-elle bissextile ? " << (bissextile(2000) ? "Oui" : "Non") << std::endl;
    std::cout << "1900 était-elle bissextile ? " << (bissextile(1900) ? "Oui" : "Non") << std::endl;
    return 0;
}