#include "operation.h"


operation::operation(int num,int date, double solde)
{
	this->num = num;
	this->date = date;
	this->solde = solde;
}

void operation::afficher() const
{
	std::cout << this->date << this->num << this->solde << endl;
}

operation::~operation()
{
	std::cout << "" << std::endl;
}