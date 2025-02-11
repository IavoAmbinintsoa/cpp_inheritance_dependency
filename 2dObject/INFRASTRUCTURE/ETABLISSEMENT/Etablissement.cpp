#include "Etablissement.h"
using namespace place;
Etablissement::Etablissement(/* args */)
{
}
Etablissement::~Etablissement()
{
}
void Etablissement::setStudentNumber(int number)
{
    StudentNumber = number;
}
int Etablissement::getStudentNumber()
{
    return StudentNumber;
}
void Etablissement::Inscrire(Etudiant e)
{
    ListOfStudent.push_back(e);
    StudentNumber = size(ListOfStudent);
}
void Etablissement::DisplayEtabDetails()
{
    cout << "Name : " << getName() << endl;
    cout << "Number Of Student : " << StudentNumber << endl;
    cout << "Perimetre : " << getPerimetre() << endl;
    cout << "\n \t ALL STUDENT " << endl;
    for (Etudiant e : ListOfStudent)
    {
        e.setEtablisment(getName());
        e.DisplayDetails();
    }
    
}