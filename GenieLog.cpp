/**
* \file GenieLog.cpp
* \brief Fichier librairie contenant les fonctions relatives structure GN
* \author Robin Guilhot/Adrien Maccario
* \version v1
* \date 8/03/2013
*Ce fichier contient les fonctions des prototypes déclarés dans le fichier GenieLog.h
*/

#include "GenieLog.h"
#include "Addition.cpp"

/**
Fonction de convertion, string vers GN.
Cette fonction va permettre d'initialiser le signe et va ensuite procéder a la conversion case par case d'un string vers un vector d'int.
*/

using namespace std;


void Conversion(string valeur, GN &nb) // Conversion d'un string en un tableau d'int
{

    int cpt=0;
    nb.signe=true;
    if(valeur[0]=='-') // Si le nombre est negatif
    {
        nb.signe=false; // Nombre negatif
	cpt=1;
    }

    for(cpt;cpt<valeur.size();cpt++){
        switch(valeur[cpt]){
             case 48:nb.num.push_back(0); break;
             case 49:nb.num.push_back(1); break;
             case 50:nb.num.push_back(2); break;
             case 51:nb.num.push_back(3); break;
             case 52:nb.num.push_back(4); break;
             case 53:nb.num.push_back(5); break;
             case 54:nb.num.push_back(6); break;
             case 55:nb.num.push_back(7); break;
             case 56:nb.num.push_back(8); break;
             case 57:nb.num.push_back(9); break;
             default:
                cout<<"Caractère non définit, recommencer"<<endl;
                exit(1);
                break;
        }
    }
           
}


void Affichage(GN nb){

   int cpt;
    if(nb.signe==false)cout<<"-";
    for(cpt=0;cpt<nb.num.size();cpt++){
        cout<<nb.num[cpt];
    }
    cout<<endl;
}



int main()
{
    string valeur;
    GN nb2;
    GN nb1;
    GN res;
 cout<<"Entrez un nombre"<<endl;
   cin>>valeur;

Conversion(valeur,nb1);
    Affichage(nb1);
 cout<<"Entrez un nombre"<<endl;
   cin>>valeur;

Conversion(valeur,nb2);
    Affichage(nb2);

Addition(nb1,nb2,res);
Affichage(res);
       
    return 0;
}
