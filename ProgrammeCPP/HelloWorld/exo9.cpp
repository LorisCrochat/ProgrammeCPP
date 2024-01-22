#include <iostream>
#include <math.h>

using namespace std;

int main()
{ 
    double v=1;
    int i;
    
    for (i=2 ; i<=100   ; i++)
    {

        v = 1.0 +1.0 / v;
    }
    cout <<"Nombre d'or =" << v << endl;
 
     cin.get();
     cin.ignore();
     return 0;
}
