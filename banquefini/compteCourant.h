#pragma once
#include "compte.h"

namespace Banque {
	class compteCourant : public compte
	{
	public:
		compteCourant();
		compteCourant(string nomProp, devise solde, double decouvert);
		bool retirerArgent(double montant) override;
		void deposerArgent(double montant) override;
		void consulterSolde() const override;
		bool transfererArgent(compte* c, double montant) override;
		void afficher() const override;
		~compteCourant();

	protected:
		double decouvert;
	};
}

