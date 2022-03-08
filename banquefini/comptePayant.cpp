#include "comptePayant.h"
int Banque::comptePayant::mop = 0.05;
using namespace Banque;

Banque::comptePayant::comptePayant()
	: compte(nomProp, solde)
{
	
}

Banque::comptePayant::comptePayant(string nomProp, devise solde)
	: compte(nomProp, solde)
{
}

void Banque::comptePayant::afficher() const
{
	this->compte::afficher();
}

bool Banque::comptePayant::retirerArgent(double montant)
{
	if (this->compte::retirerArgent(montant))
	return this->compte::retirerArgent(montant * mop);
}

bool Banque::comptePayant::transfererArgent(compte* c, double montant)
{
	if (this->compte::transfererArgent(c,montant))
		 return this->compte::retirerArgent(montant * mop);
}

Banque::comptePayant::~comptePayant()
{
	std::cout << "destructeur de la classe comptePayant" << std::endl;
}
