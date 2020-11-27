#include "pch.h"
class Client
{
private:
	string nom_client, prenom_client, adresse_livraison_client, adresse_facturation_client, date_naissance_client, date_premier_achat_client;
public:
	Client();
	Client(string nom_client, string prenom_client, string adresse_livraison_client, string adresse_facturation_client, string date_naissance_client, string date_premier_achat_client);
	void setnom(string nom_client);
	string getnom();
	void setprenom(string prenom_client);
	string getprenom();
	void setadresse_liv(string adresse_livraison_client);
	string getadresse_liv();
	void setadresse_fact(string adresse_facturation_client);
	string getadresse_fact();
	void setdate_naissace(string date_naissance_client);
	string getdate_naissance();
	void setdate_premier(string date_premier_achat_client);
	string getdate_premier();


};

