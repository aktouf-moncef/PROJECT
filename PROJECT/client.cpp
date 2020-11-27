#include "Client.h"

Client::Client()
{
}

Client::Client(string nom_client, string prenom_client, string adresse_livraison_client, string adresse_facturation_client, string date_naissance_client, string date_premier_achat_client) :nom_client(nom_client), prenom_client(prenom_client), adresse_livraison_client(adresse_livraison_client), adresse_facturation_client(adresse_facturation_client), date_naissance_client(date_naissance_client), date_premier_achat_client(date_premier_achat_client)
{
}

void Client::setnom(string nom_client)
{
	this->nom_client = nom_client;
}

string Client::getnom()
{
	return string(nom_client);
}

void Client::setprenom(string prenom_client)
{
	this->prenom_client = prenom_client;
}

string Client::getprenom()
{
	return string(prenom_client);
}

void Client::setadresse_liv(string adresse_livraison_client)
{
	this->adresse_livraison_client = adresse_livraison_client;
}

string Client::getadresse_liv()
{
	return string(adresse_livraison_client);
}

void Client::setadresse_fact(string adresse_facturation_client)
{
	this->adresse_facturation_client;
}

string Client::getadresse_fact()
{
	return string(adresse_facturation_client);
}

void Client::setdate_naissace(string date_naissance_client)
{
	this->date_naissance_client = date_naissance_client;
}

string Client::getdate_naissance()
{
	return string(date_naissance_client);
}

void Client::setdate_premier(string date_premier_achat_client)
{
	this->date_premier_achat_client = date_premier_achat_client;
}

string Client::getdate_premier()
{
	return string(date_premier_achat_client);
}
