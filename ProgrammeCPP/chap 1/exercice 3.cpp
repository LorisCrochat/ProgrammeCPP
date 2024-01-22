#include <iostream>

using namespace std;

int nombrechiffres(long n) {
    /*
    Renvoie le nombre de chiffres de n.

    Args:
    - n: Le nombre entier.

    Returns:
    - Le nombre de chiffres de n.
    */

    int count = 0;

    // Gestion du cas où n est négatif
    if (n < 0) {
        n = -n;
    }

    // Compte le nombre de chiffres en utilisant une boucle
    while (n != 0) {
        n /= 10;
        ++count;
    }

    return count;
}

int main() {
    long nombre;

    cout << "Introduire un nombre entier : ";
    cin >> nombre;

    int result = nombrechiffres(nombre);

    cout << "Le nombre " << nombre << " a " << result << " chiffres." << endl;

    cin.get();
    cin.ignore();
    return 0;
}
