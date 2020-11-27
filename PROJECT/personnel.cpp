#include "Personnel.h"

Personnel::Personnel()
{
}

Personnel::Personnel(string nom_perso, string prenom_perso, string adresse_perso, string date_embauchement_perso) :nom_perso(nom_perso), prenom_perso(prenom_perso), adresse_perso(adresse_perso), date_embauchement_perso(date_embauchement_perso)
{
}

void Personnel::setnom(string nom_perso)
{
	this->nom_perso = nom_perso;
}

string Personnel::getnom()
{
	return string(nom_perso);
}

void Personnel::setprenom(string prenom_perso)
{
	this->prenom_perso = prenom_perso;
}

string Personnel::getprenom()
{
	return string(prenom_perso);
}

void Personnel::setadresse(string adresse_perso)
{
	this->adresse_perso = adresse_perso;
}

string Personnel::getadresse()
{
	return string(adresse_perso);
}

void Personnel::setdate_embauchement(string date_embachement_perso)
{
	this->date_embauchement_perso = date_embauchement_perso;
}

string Personnel::getdate_embauchement()
{
	return string(date_embauchement_perso);
}
