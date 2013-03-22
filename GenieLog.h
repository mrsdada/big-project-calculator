/**
* \file GN.h
* \brief Fichier librairie contenant la structure Grand Nombre
* \author Robin Guilhot/Adrien Maccario
* \version v1
* \date 8/03/2013
*Ce fichier contient la structure Grand nombre ainsi que les prototypes de fonction relative a la librairie.
*/

#include <iostream>
#include <vector>
#include <string.h>
#include <stdlib.h>
#ifndef _GN_
#define _GN_

/**
*La structure Grand Nombre (GN) qui contient un booleen pour le signe, un pointeur vers un tableau d'int qui contiendra le nombre (chaque case corespondant a un chiffre) et 
*/

using namespace std;

class GN{
   public:
   vector<int> num;      // nombre
      bool signe;// signe du nombre
};

/**
* Prototype des fonctions membres de la librairie.
*/
void Conversion(string valeur, GN &nb);
void Affichage(GN nb);
#endif
