#include "Addition.h"
void Addition(GN &nb1,GN &nb2, GN &res)
{
     int retenue=0;
     int i=nb1.num.size()-1;
     int j=nb2.num.size()-1;
     int inter;
     int somme;

     while(i>=0 || j>=0)
     {
         if(i<0)
         {
   
	      somme=nb2.num[j]+retenue;
           
              if(somme>9)
              {
                   retenue=somme/10;
		   inter=somme%10;
                   res.num.push_back(inter);
              }
              else
              {             
                   res.num.push_back(somme);
                   retenue=0;
              }
              j--;         
         }
         else if(j<0)
         {
              
	      somme=nb1.num[i]+retenue;
             
              if(somme>9)
              {
                   inter=somme%10;
                   res.num.push_back(inter);
              }
              else
              {  
		   res.num.push_back(somme);
                   retenue=0;
              }
              i--;         
         }
         else
         {      
              somme=nb1.num[i]+nb2.num[j]+retenue;
              
              if(somme>9)
              {      
                   retenue=somme/10;
		   inter=somme%10;
                   res.num.push_back(inter);
              }
              else
              {      
                   res.num.push_back(somme);
                   retenue=0;
              }
              i--;
              j--;          
          } 
     }  
}
