#include <iostream>

using namespace std;

class Nombre
{
      public:
      char *n;      // nombre
      bool signe;   // signe du nombre
      int taille;   // taille du nombre
      
      Nombre(int);
      ~Nombre();    
};
