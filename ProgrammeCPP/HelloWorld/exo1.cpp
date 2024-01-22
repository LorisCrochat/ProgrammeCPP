#include <iostream>

using namespace std;

int main()
{

    double nbKms, nbLitres, conso;

    cout<<"saisir le nombre de kilomeres nKms parcourus : ";
    cin >> nbKms;

    cout<<"Saisir le nombre de litres d'essence nbLitres ajoutés dans le réservoir : ";
    cin >> nbLitres;

    conso = nbLitres*100.0/nbKms;

    cout<<"Afficher conso : ";
    cin >> conso;

    
    cin.get();cin.ignore();
     return 0;
}

    

    


