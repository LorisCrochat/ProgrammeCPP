#include <iostream>

using namespace std;

bool estUnChiffre(int nombre) {
    /*
    Vérifie si le nombre passé en argument est un chiffre.

    Args:
    - nombre: Le nombre à vérifier.

    Returns:
    - true si le nombre est un chiffre, false sinon.
    */
    return (nombre >= 0 && nombre <= 9);
}

int main() {
    // Programme principal de test
  
    int nombres_a_tester[] = {5, 12, 0, -3, 7};

    for (int i = 0; i < sizeof(nombres_a_tester) / sizeof(nombres_a_tester[0]); ++i) {
        bool resultat = estUnChiffre(nombres_a_tester[i]);
        cout << nombres_a_tester[i] << " est un chiffre : " << boolalpha << resultat << endl;
    }

    cin.get();
    cin.ignore();
    return 0;
}
