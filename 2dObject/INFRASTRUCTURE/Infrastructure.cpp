#include "Infrastructure.h"

using namespace place;
void Infrastructure::setName(string name)
{
    this->name = name;
}
void Infrastructure::setPerimetre(float per)
{
    perimetre = per;
}
string Infrastructure::getName()
{
    return name;
}
float Infrastructure::getPerimetre()
{
    return perimetre;
}
Infrastructure::Infrastructure(/* args */)
{
}

Infrastructure::~Infrastructure()
{
}