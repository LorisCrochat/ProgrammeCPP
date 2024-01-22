#include <iostream>
using namespace std;

int main()
{
    int i, nb, chiffre, somme = 0;

    for (i = 1; i <= 99999; i++)
    {
        somme = 0; 
        nb = i;
        do
        {
            chiffre = nb % 10;
            nb = nb / 10;
            somme +=chiffre;
        } while (nb != 0);

        if (i == 11 * somme)
        {
            cout << "Le nombre est " << i << endl;
        }
    }

    cin.get();
    cin.ignore();
    return 0;
}