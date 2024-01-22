#include <iostream>

using namespace std ;

const double PI=3.14159;

/*


FONCTION principale
*/
int main()
{
    double rayon,hauteur,volume;

    cout <<"Saisir le rayon au clavier : ";
    cin >> rayon ; 

    cout <<"Saisir la hauteur du cône au clavier : ";
    cin >> hauteur ;
 
    volume = PI*rayon*rayon*hauteur/3.0; 
    cout <<"Volume = " << volume <<endl;

    
    cin.get();
    cin.ignore();
}
