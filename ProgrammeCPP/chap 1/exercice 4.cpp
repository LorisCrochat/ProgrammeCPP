#include <iostream>

using namespace std;

double volumePyramide(double hauteur, double largeurBase, double longueurBase = -1) {
    /*
    Renvoie le volume d'une pyramide en fonction des dimensions de sa base.

    Args:
    - hauteur: Hauteur de la pyramide.
    - largeurBase: Largeur de la base de la pyramide.
    - longueurBase: Longueur de la base de la pyramide (-1 par défaut).

    Returns:
    - Le volume de la pyramide.
    */

    // Si longueurBase est -1, on la prend égale à la largeur de la base
    if (longueurBase == -1) {
        longueurBase = largeurBase;
    }

    // Calcul de l'aire de la base
    double aireBase = largeurBase * longueurBase;

    // Calcul du volume de la pyramide
    double volume = (aireBase * hauteur) / 3.0;

    return volume;
}

int main() {
    cout << "Volume de la pyramide : " << volumePyramide(20.5, 5, 7) << " m^3" << endl;
    cout << "Volume de la pyramide : " << volumePyramide(20.5, 5) << " m^3" << endl;

    cin.get();
    cin.ignore();
    return 0;
}
