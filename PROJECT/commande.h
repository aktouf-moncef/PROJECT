#include "pch.h"
class Commande
{
private:
	string date_livraison_commancde, date_emission_commancde, date_paiment_commancde, date_solde_commancde, moyen_paiment_commancde, nom_article_commancde, tab_article_n[50];
	float montant_HT, montant_TVA, montant_TTC, remise;
	int tab_article_qt[50], n_incre, quantite;
public:
	Commande();
	Commande(string date_livraison_commancde, string date_emission_commancde, string date_paiment_commancde, string date_solde_commancde, string moyen_paiment_commancde, string nom_article_commancde, float montant_HT, float TVA, float montant_TTC, float remise, int quantite);
	string getdate_liv();
	void setdate_liv(string date_livraison_commancde);
	string getdate_emission();
	void setdate_emission(string date_emission_commancde);
	string getdate_paiment();
	void setdate_paiment(string date_paiment_commancde);
	string getdate_solde();
	void setdate_solde(string date_solde_commancde);
	string getmoyen_paiment();
	void setmoyen_paiment(string moyen_paiment_commancde);
	string getnom_article();
	void setnom_article(string nom_article_commancde);
	float getmontant_HT();
	void setmontant_HT();
	float getmontant_TVA();
	void setmontant_TVA();
	float getmontant_TTC();
	void setmontant_TTC();
	float getremise();
	void setremise(float remise);
};
