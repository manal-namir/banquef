#pragma once
#include "compte.h"

namespace Banque {
	class comptePayant : public compte
	{
	public:
		comptePayant();
		comptePayant(string nomProp, devise solde);
		void afficher() const override;
		bool retirerArgent(double montant) override;
		bool transfererArgent(compte* c, double montant) override;
		~comptePayant();

	protected:
		static int mop;// montant d operation
	};
}

