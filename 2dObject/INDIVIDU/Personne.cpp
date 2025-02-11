#include "Personne.h"


using namespace individu;
void Personne::info()
{
    cout << "name : " << name << endl;
    cout << "age : " << age << endl;
}
void Personne::setName(string name)
{
    this->name = name;
}
string Personne::getName()
{
    return name;
}
void Personne::setAge(int age)
{
    this->age = age;
}
int Personne::getAge()
{
    return age;
}