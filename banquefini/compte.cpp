#include "compte.h"
#include "operation.h"
#include "MAD.h"
#include <iostream>
#include< stdio.h >

using namespace std;
using namespace Banque;

    int Banque::compte::cpt = 0;

    Banque::compte::compte()
    {
        this->cpt++;
        this->numcompte = cpt;
        this->nomProp = "NULL";
        this->solde = 0.0;
        this->oper = vector<operation*>();
    }

    Banque::compte::compte(Client nomProp, devise solde)
    {
        this->cpt++;
        this->numcompte = cpt;
        this->nomProp = nomProp;
        this->solde = solde;
        this->oper = vector<operation*>();
    }

    bool Banque::compte::retirerArgent(double montant)

    {
        if (this->solde >= montant) {
            this->solde = this->solde - montant;
            return true;
        }
        return false;
    }

    void Banque::compte::deposerArgent(double montant)
    {
        this->solde = this->solde + montant;
    }

    void Banque::compte::consulterSolde() const
    {
        cout << "le compte est: " << this->numcompte << std::endl;
        cout << "le solde est: " << this->solde << std::endl;

    }

    bool Banque::compte::transfererArgent(compte * c, double montant)
    {
        if (this->retirerArgent(montant) == true) {
            c->deposerArgent(montant);
            return true;
        }
        return false;
    }

    void Banque::compte::add_operation(operation* o)
    {
        this->oper.push_back(o);
    }
    void Banque::compte::afficher() const
    {
        cout << "Nomprop: " << this->nomProp << "solde: " << this->solde << endl;

        for (int i = 0; i < this->oper.size(); i++)
        {
            this->oper[i]->operation::afficher();
        }
    }

    Banque::compte::~compte()
    {
        cout << "destructeur" << std::endl;
        this->oper.clear();
        compte::cpt--;

    }
