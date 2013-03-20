#include <iostream>
#include "GenieLog.h"

using namespace std;

Nombre::Nombre(int t)   // Constructeur
{
    taille=t;
    n=new char[t*t];
    signe=false;                                                
}

Nombre::~Nombre()    // Destructeur
{
    delete [] n;             
}

void addition(Nombre &nb1, Nombre &nb2, Nombre &res)
{
     char retenue='0';
     int i=nb1.taille-1;
     int j=nb2.taille-1;
     char somme;
     
     res.taille=0;
     while(i>=0 && j>=0)
     {
         if(i<0)
         {
              somme=nb2.n[j]+retenue;
              if(somme>9)
              {
                   retenue=somme/10;
                   res.n[res.taille]=somme%10;
              }
              else
              {             
                   res.n[res.taille]=somme;
                   retenue='0';
              }
              res.taille++;
              j--;         
         }
         else if(j<0)
         {
              somme=nb1.n[i]+retenue;
              if(somme>9)
              {
                   retenue=somme/10;
                   res.n[res.taille]=somme%10;
              }
              else
              {             
                   res.n[res.taille]=somme;
                   retenue='0';
              }
              res.taille++;
              i--;         
         }
         else
         {       
              somme=nb1.n[i]+nb2.n[j]+retenue;  
              if(somme>9)
              {      
                   retenue=somme/10;
                   res.n[res.taille]=somme%10;
              }
              else
              {             
                   res.n[res.taille]=somme;
                   retenue='0';
              }
              res.taille++;
              i--;
              j--;          
          } 
     }   
}

void signe_res(Nombre &nb1, Nombre &nb2, Nombre &res)
{
     if(nb1.signe==true && nb2.signe==true)
     {
         res.signe=true;
         addition(nb1,nb2,res);
     }
     else if(nb1.signe==false && nb2.signe==false)
     {
          cout<<"Addition"<<endl;
         addition(nb1,nb2,res);     
     }
     else if(nb1.signe==true && nb2.signe==false || nb1.signe==false && nb2.signe==true)
     {
         //soustraction(nb1,nb2,res);
         cout<<"Soustraction"<<endl;     
     }
}

void conversion(string valeur, Nombre &nb) // Conversion d'un string en un tableau de char
{
    int i=0;
    int j=0;
    if(valeur[0]=='-') // Si le nombre est negatif
    {
        nb.signe=true; // Nombre negatif
        i++; // Incrementation du string pour avoir le 1er chiffre
    }
    for(i;i<nb.taille;i++) // Copie du nombre dans le tableu de char
    {
        nb.n[j]=valeur[i];
        j++;
    }
    nb.taille=j; // Permet d'avoir la taille du nombre
    cout<<nb.taille<<endl;
    for(int k=0;k<nb.taille;k++) // Affichage
            cout<<nb.n[k];
    cout<<endl;           
}

int main()
{
    string valeur;
    int t;
    int taille_res;
    
    cout<<"Entrez un nombre"<<endl;
    cin>>valeur;
    t=valeur.size();
    taille_res=t;
    cout<<t<<endl;
    cout<<valeur<<endl;
    
    Nombre nb1(t);
    
    conversion(valeur,nb1);
    
    cout<<"Entrez un nombre"<<endl;
    cin>>valeur;
    t=valeur.size();
    taille_res=taille_res+t;
    cout<<t<<endl;
    cout<<valeur<<endl;
    
    Nombre nb2(t);
    
    conversion(valeur,nb2);
    
    Nombre res(taille_res);
    
    signe_res(nb1,nb2,res);
    
    
    
    system ("pause");   
    //return 0;
}
