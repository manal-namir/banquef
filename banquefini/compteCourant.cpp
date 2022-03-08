#include "compteCourant.h"

Banque::compteCourant::compteCourant()
	:compte(nomProp, solde)
{
	this->decouvert = 0.0;
}

Banque::compteCourant::compteCourant(string nomProp, devise solde, double decouvert)

	:compte(nomProp, solde)
	{
		this->decouvert = decouvert;
	}

bool Banque::compteCourant::retirerArgent(double montant)
{
	return this->compte::retirerArgent(montant);
}

void Banque::compteCourant::deposerArgent(double montant)
{
		this->compte::deposerArgent(montant);
}

void Banque::compteCourant::consulterSolde() const
{
	this->compte::consulterSolde();
}

bool Banque::compteCourant::transfererArgent(compte* c, double montant)
{
	return this->compte::transfererArgent(c,montant);
}

void Banque::compteCourant::afficher() const
{
	this->compte::afficher();
	cout << "decouvert: " << this->decouvert << endl;
}

Banque::compteCourant::~compteCourant()
{
	std::cout << "destructeur de la classe compteEpargne" << std::endl;
}



