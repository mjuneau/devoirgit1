#ifndef VEHICULE_H
#define VEHICULE_H
#include <string>

class Vehicule
{
    std::string _name;
public:
    Vehicule(std::string name =0);
    std::string toString()const;
};

#endif // VEHICULE_H
