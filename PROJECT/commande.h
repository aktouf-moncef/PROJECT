#include "pch.h"
class Commande
{
private:
	string date_livraison_commande, date_emission_commande, date_paiment_commande, date_solde_commande, moyen_paiment_commande, nom_article_commande, tab_article_n[50];
	float montant_HT, montant_TVA, montant_TTC, remise;
	int tab_article_qt[50], n_incre, quantite;
public:
	Commande();
	Commande(string date_livraison_commande, string date_emission_commande, string date_paiment_commande, string date_solde_commande, string moyen_paiment_commande, string nom_article_commande, float montant_HT, float TVA, float montant_TTC, float remise, int quantite);
	string getdate_liv();
	void setdate_liv(string date_livraison_commande);
	string getdate_emission();
	void setdate_emission(string date_emission_commande);
	string getdate_paiment();
	void setdate_paiment(string date_paiment_commande);
	string getdate_solde();
	void setdate_solde(string date_solde_commande);
	string getmoyen_paiment();
	void setmoyen_paiment(string moyen_paiment_commande);
	string getnom_article();
	void setnom_article(string nom_article_commande);
	float getmontant_HT();
	void setmontant_HT();
	float getmontant_TVA();
	void setmontant_TVA();
	float getmontant_TTC();
	void setmontant_TTC();
	float getremise();
	void setremise(float remise);
};
