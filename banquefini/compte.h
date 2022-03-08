#pragma once
#include "client.h"
#include "devise.h"
#include "operation.h"
#include <vector>
#include< stdio.h >
#include <iostream>


using namespace std;
 namespace Banque{

	 class compte
	 {
	 public: 
		 compte();
		 compte(Client nomProp, devise solde);
		 bool retirerArgent(double montant);virtual
		 void deposerArgent(double montant); virtual
		 void consulterSolde() const; virtual
		 bool transfererArgent(compte* c, double montant); virtual
		 void add_operation(operation* o);
		 void afficher() const; virtual
		 ~compte();
	
	 protected:
		 static	int cpt;
		 Client nomProp;
		 devise solde;
		 int numcompte;
		 vector<operation*> oper;
	 };
};s