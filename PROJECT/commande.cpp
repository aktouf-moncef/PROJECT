#include "commande.h"

Commande::Commande()
{
}

Commande::Commande(string date_livraison_commande, string date_emission_commande, string date_paiment_commande, string date_solde_commande, string moyen_paiment_commande, string nom_article_commande, float montant_HT, float montant_TVA, float montant_TTC, float remise, int quantite) :date_livraison_commande(date_livraison_commande), date_emission_commande(date_emission_commande), date_paiment_commande(date_paiment_commande), date_solde_commande(date_solde_commande), moyen_paiment_commande(moyen_paiment_commande), montant_HT(montant_HT), remise(remise), montant_TTC(montant_TTC), montant_TVA(montant_TVA), n_incre(n_incre), quantite(quantite)
{
	for (int i = 0; i < n_incre; i++) {
		this->tab_article_qt[i] = this->quantite;
	}
	for (int i = 0; i < n_incre; i++) {
		this->tab_article_n[i] = this->nom_article_commande;
	}
}

string Commande::getdate_liv()
{
	return string(this->date_livraison_commande);
}

void Commande::setdate_liv(string date_livraison_commande)
{
	this->date_livraison_commande = date_livraison_commande;
}

string Commande::getdate_emission()
{
	return string(this->date_emission_commande);
}

void Commande::setdate_emission(string date_emission_commande)
{
	this->date_emission_commande = date_emission_commande;
}

string Commande::getdate_paiment()
{
	return string(this->date_paiment_commande);
}

void Commande::setdate_paiment(string date_paiment_commande)
{
	this->date_paiment_commande = date_paiment_commande;
}

string Commande::getdate_solde()
{
	return string(this->date_solde_commande);
}

void Commande::setdate_solde(string date_solde_commande)
{
	this->date_solde_commande = date_solde_commande;
}

string Commande::getmoyen_paiment()
{
	return string(moyen_paiment_commande);
}

void Commande::setmoyen_paiment(string moyen_paiment_commande)
{
	this->moyen_paiment_commande = moyen_paiment_commande;
}

string Commande::getnom_article()
{
	return string(this->nom_article_commande);
}

void Commande::setnom_article(string nom_article_commande)
{
	this->nom_article_commande = nom_article_commande;
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
