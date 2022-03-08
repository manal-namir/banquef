#pragma once
#include "compte.h"

namespace Banque {
	class compteEpargne : public compte
	{
	public:
		compteEpargne();
		compteEpargne(string nomProp, devise solde, double TauxInteret);
		double miseajour(double montant, double TauxInteret);
		bool transfererArgent(compte* c, double montant) override;
		double retirermoitie();
		double retirer();
		void afficher() const override;
		~compteEpargne();

	protected:
		double TauxInteret;
	};
}

