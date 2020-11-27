#include "commande.h"

Commande::Commande()
{
}

Commande::Commande(string date_livraison_commancde, string date_emission_commancde, string date_paiment_commancde, string date_solde_commancde, string moyen_paiment_commancde, string nom_article_commancde, float montant_HT, float montant_TVA, float montant_TTC, float remise, int quantite) :date_livraison_commancde(date_livraison_commancde), date_emission_commancde(date_emission_commancde), date_paiment_commancde(date_paiment_commancde), date_solde_commancde(date_solde_commancde), moyen_paiment_commancde(moyen_paiment_commancde), montant_HT(montant_HT), remise(remise), montant_TTC(montant_TTC), montant_TVA(montant_TVA), n_incre(n_incre), quantite(quantite)
{
	for (int i = 0; i < n_incre; i++) {
		this->tab_article_qt[i] = this->quantite;
	}
	for (int i = 0; i < n_incre; i++) {
		this->tab_article_n[i] = this->nom_article_commancde;
	}
}

string Commande::getdate_liv()
{
	return string(this->date_livraison_commancde);
}

void Commande::setdate_liv(string date_livraison_commancde)
{
	this->date_livraison_commancde = date_livraison_commancde;
}

string Commande::getdate_emission()
{
	return string(this->date_emission_commancde);
}

void Commande::setdate_emission(string date_emission_commancde)
{
	this->date_emission_commancde = date_emission_commancde;
}

string Commande::getdate_paiment()
{
	return string(this->date_paiment_commancde);
}

void Commande::setdate_paiment(string date_paiment_commancde)
{
	this->date_paiment_commancde = date_paiment_commancde;
}

string Commande::getdate_solde()
{
	return string(this->date_solde_commancde);
}

void Commande::setdate_solde(string date_solde_commancde)
{
	this->date_solde_commancde = date_solde_commancde;
}

string Commande::getmoyen_paiment()
{
	return string(moyen_paiment_commancde);
}

void Commande::setmoyen_paiment(string moyen_paiment_commancde)
{
	this->moyen_paiment_commancde = moyen_paiment_commancde;
}

string Commande::getnom_article()
{
	return string(this->nom_article_commancde);
}

void Commande::setnom_article(string nom_article_commancde)
{
	this->nom_article_commancde = nom_article_commancde;
}

float Commande::getmontant_HT()
{
	return this->montant_HT;
}

void Commande::setmontant_HT()
{
	this->montant_HT = montant_HT;
}

float Commande::getmontant_TVA()
{
	return this->montant_TVA;
}

void Commande::setmontant_TVA()
{
	this->montant_TVA = montant_TVA;
}

float Commande::getmontant_TTC()
{
	return montant_TTC;
}

void Commande::setmontant_TTC()
{
	this->montant_TTC = montant_TTC;
}

float Commande::getremise()
{
	return this->remise;
}

void Commande::setremise(float remise)
{
	this->remise = remise;
}
