#include "pch.h"
class Facture
{
private:
	string nom_societe, adresse_societe, nom_client_fac;
	int num_service_client;
public:
	Facture(string nom_client_fac);
	void setnom_client(string nom_client_fac);
	string getnom_client();
};


