#include "Etudiant.h"

using namespace individu;
Etudiant::Etudiant()
{
}
void Etudiant::setfiliere(string fil)
{
    filiere = fil;
}
string Etudiant::getfiliere()
{
    return filiere;
}
void Etudiant::setEtablisment(string et)
{
    this->EcoleName = et;
}
Etudiant::~Etudiant()
{
}
void Etudiant::DisplayDetails()
{
    info();
    cout << "Etablissment : " << EcoleName << endl;
    cout << "Filiary : " << filiere << endl; 
}