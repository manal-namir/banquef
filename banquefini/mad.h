#pragma once
#include<iostream>
#include< stdio.h >
 
 class MAD
 {
 public:
     MAD(double valeur, string symbole);
     void afficher() const;
     ~MAD();
 private : 
     double valeur;
     string symbole;
 }