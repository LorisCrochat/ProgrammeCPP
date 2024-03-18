#include <iostream>

using namespace std;

int nbValPaires(int *tab)
{
    int compteur = 0;
    for (int i = 0; i < 10; i++)
    {
        if (tab[i] % 2 == 0)
        {
            compteur++;
        }
    }       
    return compteur;
    
    int main()

    {
     int val[10]; 

     saisie(val,10);
     cout <<"Le tableau saisi a"
     <<nbValPaires(val) <<" valeurs paires" << endl;
    }
      cin.get();
    cin.ignore();
    return EXIT_SUCCESS;


}