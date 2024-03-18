#include <iostream>  //inclusion de la librairie des E/S
 
using namespace std ;
 
void saisie(double *tab, int nombreDeCases);
void affichage(double *tab, int nombreDeCases);
/*==========================
Fonction principale
==========================*/
 
void saisie(double *tab, int nombreDeCases)
{
    for (int i=0 ; i < nombreDeCases ; i++)
    {
        cout  << "Saisir la note numero" <<i <<" :"<< endl;
        cin >> tab[i] ;
    }
}
 
void affichage(double *tab, int nombreDeCases)
{
    cout << "Voici les notes :"<<endl;
    for (int i=0 ; i < nombreDeCases ; i++)
    {
        cout  << "Saisir la note numero" <<i <<" :"<< endl;
    }
}
 
int main()
{
    double notes[19]={5};
   
    saisie(notes , 5);
    affichage(notes , 5);
    cin.get();cin.ignore() ; // on attend l'appui sur une touche
    return EXIT_SUCCESS;
}
#include <iostream>  //inclusion de la librairie des E/S
 
using namespace std ;
 
void saisie(double *tab, int nombreDeCases);
void affichage(double *tab, int nombreDeCases);
/*==========================
Fonction principale
==========================*/
 
void saisie(double *tab, int nombreDeCases)
{
    for (int i=0 ; i < nombreDeCases ; i++)
    {
        cout  << "Saisir la note numero" <<i <<" :"<< endl;
        cin >> tab[i] ;
    }
}
 
void affichage(double *tab, int nombreDeCases)
{
    cout << "Voici les notes :"<<endl;
    for (int i=0 ; i < nombreDeCases ; i++)
    {
        cout  << "Saisir la note numero" <<i <<" :"<< endl;
    }
}
 