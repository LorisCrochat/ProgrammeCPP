#include <iostream>
using namespace std;


int main()
{
     long long NIR;
    int cle;

    cout << "Entrez le numéro d'inscription (NIR) à 13 chiffres : ";
    cin >> NIR;

    
    cle = 97 - (NIR % 97);

    cout << "La clé de contrôle est : " << cle << endl;


     cin.get();cin.ignore();
     return 0;
}
