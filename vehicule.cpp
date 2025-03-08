#include "vehicule.h"
#include <string>


std::string Vehicule::toString() const
{
    return _name;
}

Vehicule::Vehicule(std::string name):_name(name) {}
