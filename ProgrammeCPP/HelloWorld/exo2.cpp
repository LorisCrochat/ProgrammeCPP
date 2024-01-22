#include <iostream>
#include <math.h>

using namespace std;

int main()
{
     double a,b ,c,p ,tmp,aire;
     
     cout<<"Saisir a,b,c au clavier : ";
     cin >> a>>b>>c;

     p =(a+b+c)/2;
     tmp =p*(p-a)*(p-b)*(p-c);

     if (tmp<0)
     {
         cout <<"Erreur de saisie : ";
          
     }
     else
     {
          aire = sqrt(tmp);
          cout <<"Afficher aire :" <<aire <<endl;
     }

     cin.get();cin.ignore();
     return 0;
}
