#include "client.h"
#include<iostream>


Client::Client(string nom, string prenom, string adresse)
{
	this->nom = nom;
	this->prenom = prenom;
	this->adresse = adresse;
}


void Client::afficher() const
{
	std::cout << this->nom << this->prenom << this->adresse << endl;
}


Banque::Client::~Client()
{
	std::cout << "" << std::endl;
}