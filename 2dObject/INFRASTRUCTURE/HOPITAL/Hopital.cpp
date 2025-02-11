#include "Hopital.h"

using namespace place;
void Hopital::setDoctor(Medecin doc)
{
    AllDoctor.push_back(doc);
}
void Hopital::setPatientNumber(int number)
{
    patientNumber = number;
}
int Hopital::getPatientNumber()
{
    return patientNumber;
}
vector<Medecin> Hopital::getListOfALlDoctor()
{
    return AllDoctor;
}
void Hopital::printDetails()
{
    cout << "Name : " << getName() << endl; 
    for (Medecin doc : AllDoctor)
    {
        cout << "Name : " << doc.getName() << endl;
        cout << "Age : " << doc.getAge() << endl;
        cout << "Fonction : " << doc.getFonctin() << endl << endl;
    }
    
}
Hopital::Hopital()
{
}
Hopital::~Hopital()
{
}
