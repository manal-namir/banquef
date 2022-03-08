#pragma once
#include<iostream>

	class Client
	{
	private:
		string nom;
		string prenom;
		string adresse;

	public:
		Client(string nom, string prenom, string adresse);
		void afficher() const;
		~Client();
	}