#include "compteEpargne.h"
#include "compte.h"
#include "compteCourant.h"

using namespace std;
using namespace Banque;

Banque::compteEpargne::compteEpargne()
	: compte (nomProp,solde)
{
	this->TauxInteret = 0.0;

}

Banque::compteEpargne::compteEpargne(string nomProp, devise solde, double TauxInteret)
	: compte (nomProp, solde)
{
	while (this->TauxInteret > 0 && this->TauxInteret < 100)
		this->TauxInteret = TauxInteret;
}

bool Banque::compteEpargne::transfererArgent(compte* c, const double montant)
{
	return this->compte::transfererArgent(c,montant);
}

double Banque::compteEpargne::miseajour(double solde, double TauxInteret)
{
	return solde += (solde * this->TauxInteret)/100 ;
}

double Banque::compteEpargne::retirermoitie()
{
			this->solde = this->solde - (this->solde / 2);
}

double Banque::compteEpargne::retirer()
{
	static int cpt = 0;

	this->retirermoitie() = cpt++;
	while (cpt == 1)
	{
		this->retirermoitie();

	}
}



void Banque::compteEpargne::afficher() const
{
	this->compte::afficher();
	cout << "TauxInteret: " << this->TauxInteret << endl;
}

Banque::compteEpargne::~compteEpargne()
{
	std::cout << "destructeur de la classe compteEpargne" << std::endl;
}
