#include <iostream>
using namespace std;

int main()
{
     int i,j;

     for (i=1 ; i<10 ; i++)
     {
          for (j=1 ; j<=i ; j++)
          {
               cout <<i*j<<"\t";
          }

          cout <<endl;
     }



     cin.get();cin.ignore();
     return 0;
}