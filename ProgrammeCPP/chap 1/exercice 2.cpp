#include <iostream>

using namespace std;

char maj(char caractere) {
    /*
    Renvoie la majuscule du caractère passé en argument.
    Si l'argument est déjà une majuscule, renvoie le caractère sans modification.
    Si l'argument n'est pas une lettre, renvoie 0.

    Args:
    - caractere: Le caractère à convertir en majuscule.

    Returns:
    - La majuscule du caractère, le caractère lui-même s'il est déjà en majuscule, ou 0 si ce n'est pas une lettre.
    */

    if ('a' <= caractere && caractere <= 'z') {
        // Si le caractère est une minuscule, convertit en majuscule
        return caractere - 'a' + 'A';
    } else if ('A' <= caractere && caractere <= 'Z') {
        // Si le caractère est déjà une majuscule, renvoie le caractère sans modification
        return caractere;
    } else {
        // Si le caractère n'est pas une lettre, renvoie 0
        return 0;
    }
}

int main() {
    // Programme principal de test
    char caracteres_a_tester[] = {'a', 'A', '/', '7'};

    for (int i = 0; i < sizeof(caracteres_a_tester) / sizeof(caracteres_a_tester[0]); ++i) {
        char resultat = maj(caracteres_a_tester[i]);
        if (resultat != 0) {
            cout << "maj('" << caracteres_a_tester[i] << "') renvoie '" << resultat << "'" << endl;
        } else {
            cout << "maj('" << caracteres_a_tester[i] << "') renvoie 0" << endl;
        }
    }

    cin.get();
    cin.ignore();
    return 0;
}



