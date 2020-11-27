#include"pch.h"
class Personnel
{
protected:
	string nom_perso, prenom_perso, adresse_perso, date_embauchement_perso;
public:
	Personnel();
	Personnel(string nom_perso, string prenom_perso, string adresse_perso, string date_embauchement_perso);
	void setnom(string nom_perso);
	string getnom();
	void setprenom(string prenom_perso);
	string getprenom();
	void setadresse(string adresse_perso);
	string getadresse();
	void setdate_embauchement(string date_embachement_perso);
	string getdate_embauchement();
};

