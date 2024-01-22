#include <iostream>
using namespace std;

int main()
{
    double R1,R2,R3,Rser,Rpar;
    int choix;

    cout <<"Saisir la valeur de R1";
    cin >> R1;

    cout <<"Saisir la valeur de R2";
    cin >> R2;

    cout <<"Saisir la valeur de R3";
    cin >> R3;

    cout <<"Demander a l'operateur si resistance en serie taper 1 sinon taper 2";
    cin >> choix;

    if (choix ==1)
    {
        Rser=R1+R2+R3;
        cout <<"Rser = " <<Rser <<endl;   
    }
    else
    {
        Rpar=(R1*R2*R3)/(R1*R2)+(R1*R3)+(R2*R3);
        cout <<"Rpar = " <<Rpar <<endl;
    }

     cin.get();cin.ignore();
     return 0;
}
