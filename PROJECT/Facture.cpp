#include "Facture.h"

Facture::Facture(string nom_client_fac) :nom_client_fac(nom_client_fac)
{

}

void Facture::setnom_client(string nom_client_fac)
{
	this->nom_client_fac = nom_client_fac;
}

string Facture::getnom_client()
{
	return string(nom_client_fac);
}
