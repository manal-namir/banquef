#pragma once

	class operation
	{
	public:
		operation(int date, int num, double solde);
		void afficher() const;
		~operation();
	private:
		int num;
		int date;
		double solde;
	}