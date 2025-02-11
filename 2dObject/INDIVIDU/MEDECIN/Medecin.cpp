#include "Medecin.h"

using namespace individu;
Medecin::Medecin()
{
}

Medecin::~Medecin()
{
}

string Medecin::getFonctin()
{
    return fonction;
}
void Medecin::setFonction(string fonction)
{
    this->fonction = fonction;
}