#include "Responsable.h"

Responsable::Responsable(string nom_perso, string prenom_perso, string adresse_perso, string date_embauchement_perso) : Personnel(nom_perso, prenom_perso, adresse_perso, date_embauchement_perso)
{
	this->role = "superieur";
}
