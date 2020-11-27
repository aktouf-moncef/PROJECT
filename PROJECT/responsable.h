#include "pch.h"
#include "Personnel.h"
class Responsable : public Personnel
{
private:
	string role;
public:
	Responsable(string nom_perso, string prenom_perso, string adresse_perso, string date_embauchement_perso);

};
