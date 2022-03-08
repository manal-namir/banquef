#include "MAD.h"

MAD::MAD(double valeur, string symbole)
{
    this->valeur = valeur;

}

void MAD::afficher() const
{
    cout << this->valeur << this->symbole << endl;
}


MAD::~MAD()
{
    std::cout << "" << std::endl;
}
