#include <iostream>

using namespace std;

void transformeEnCarre(double &xmin, double &ymin, double &xmax, double &ymax) {
    /*
    Transforme un rectangle en carré en ajustant les côtés xmax et ymax.

    Args:
    - xmin, ymin: Les coordonnées du coin inférieur gauche du rectangle.
    - xmax, ymax: Les coordonnées du coin supérieur droit du rectangle (seront ajustées).

    Modifie les paramètres xmax et ymax pour former un carré avec xmin et ymin comme coin inférieur gauche.
    */

    double largeur = xmax - xmin;
    double hauteur = ymax - ymin;

    // Trouve le côté le plus court (le plus petit entre la largeur et la hauteur)
    double coteMin = min(largeur, hauteur);

    // Ajuste les côtés pour former un carré
    xmax = xmin + coteMin;
    ymax = ymin + coteMin;
}

int main() {
    // Exemple d'utilisation
    double xmin = 2.0, ymin = 3.0, xmax = 7.0, ymax = 9.0;

    cout << "Avant la transformation : " << endl;
    cout << "xmin: " << xmin << ", ymin: " << ymin << ", xmax: " << xmax << ", ymax: " << ymax << endl;

    transformeEnCarre(xmin, ymin, xmax, ymax);

    cout << "Après la transformation : " << endl;
    cout << "xmin: " << xmin << ", ymin: " << ymin << ", xmax: " << xmax << ", ymax: " << ymax << endl;

    cin.get();
    cin.ignore();
    return 0;
}
