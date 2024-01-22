#include <iostream>

// Définition des fonctions min
int min(int a, int b) {
    return (a < b) ? a : b;
}

double min(double a, double b) {
    return (a < b) ? a : b;
}

char min(char a, char b) {
    return (a < b) ? a : b;
}

// Définition de la macro fonction MIN
#define MIN(x, y) ((x) < (y) ? (x) : (y))

// Macro fonction ABS
#define ABS(x) ((x) < 0 ? -(x) : (x))

int main() {
    int x = 2;
    char y = 5;

    // Utilisation des fonctions min
    std::cout << "Fonctions min : " << std::endl;
    std::cout << MIN(x, y) << std::endl; // Utilise la fonction char min(char a, char b)

    // Utilisation de la macro fonction MIN
    std::cout << "Macro fonction MIN : " << std::endl;
    std::cout << MIN(x, y) << std::endl; // Utilise la macro fonction MIN

    // Test de la macro fonction ABS
    std::cout << "Macro fonction ABS : " << std::endl;
    int z = -3;
    std::cout << ABS(z) << std::endl;

    return 0;
}
