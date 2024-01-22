#include <iostream>
using namespace std;

int addition(int truc1, int truc2)
{
    int resultat = truc1 + truc2;
    return resultat;
}

int main()
{
    int x = 2, somme;

    somme = addition(x, 7);

    cout << "Somme =" << somme << endl;

    cin.get();
    cin.ignore();
    return 0;
}

