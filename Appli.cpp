#include <iostream>
#include "GenieLog.cpp"
using namespace std;

void operation(char signe, nb1, nb2)
{
	char signe, signe2;
	string S1, S2;
	
	if(signe=='+')
	{
		addition(nb1, nb2);
		affichage(res);
	}
	if(signe=='-')
	{
		soustraction(nb1, nb2);
		affichage(res);
	}
	if(signe=='*')
	{ 
		multiplication(nb1, nb2);
		affichage(res);
	}
	if(signe=='/')
	{ 
		division(nb1, nb2);
		affichage(res);
	}
	if(signe=='%')
	{ 
		modulo(nb1, nb2);
		affichage(res);
	}
	if(signe=='^')
	{ 
		puissance(nb1, nb2);
		affichage(res);
	}
	if(signe=='c')
	{ 
		comparaison(nb1, nb2);
		affichage(res);
	}
	if(signe=='help')
	{ 
		cout << "+ : addition" << endl;
		cout << "- : soustraction" << endl;
		cout << "* : multiplication" << endl;
		cout << "/ : division" << endl;
		cout << "% : modulo" << endl; 
		cout << "^ : puissance" << endl;
		cout << "c : comparaison" << endl;
	}
	
	cout << "Pour utiliser le résultat pour une nouvelle opération, tapez r." << endl;
	cout << "Pour une nouvelle opération, tapez n." << endl;
	cout << "Pour quitter la calculatrice, tapez s." << endl;
	cin >> signe2;
	
	if(signe2=='r')
	{	
		nb1=res;
		cout << "Rentrez le deuxiéme nombre et le signe d'opération :" << endl
		cin >> S2;
		cin >> signe; 
		conversion(S2, nb2)
		operation(signe, nb1, nb2)
	}
	
	if(signe2=='n')
	{
		cout << "Rentrez les deux nombres à opérer puis votre signe d'opération, ou tapez help pour les aides :" << endl;
		cin >> S1;
		cin >> S2;
		cin >> signe;
		conversion(S1, nb1);
		conversion(S2, nb2);
		operation(signe, nb1, nb2);
	}
	
	if(signe2=='s')
	{
		cout << "Merci d'avoir utiliser Big Calculator Project" << endl;
	}
			
}

int main()
{
string S1, S2;
char signe; 

cout << "Welcome in Big Calculator Project" << endl;

cout << "Rentrez les deux nombres à opérer puis votre signe d'opération, ou tapez help pour les aides :" << endl;
cin >> S1;
cin >> S2;
cin >> signe;
conversion(S1, nb1);
conversion(S2, nb2);
operation(signe, nb1, nb2);
}
