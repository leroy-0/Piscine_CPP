#include <iostream>
#include <string>

#include "Ratatouille.h"

Ratatouille::Ratatouille(Ratatouille const & other)
{
    _recipe << other._recipe.str();
}

Ratatouille::Ratatouille()
{
  
}

Ratatouille::~Ratatouille()
{
    
}

Ratatouille& Ratatouille::addCondiment(unsigned int condiment)
{
    _recipe << condiment;
    return (*this);
}

Ratatouille& Ratatouille::addSauce(const std::string & sauce)
{
    _recipe << sauce;
    return (*this);
}

Ratatouille& Ratatouille::addSpice(double spice)
{
    _recipe << spice;
    return (*this);
}

Ratatouille& Ratatouille::addVegetable(unsigned char vegetable)
{
    _recipe << vegetable;
    return (*this);
}

std::string Ratatouille::kooc()
{
    return (_recipe.str());
}

Ratatouille& Ratatouille::operator=(const Ratatouille &old)
{
  _recipe.str("");
  _recipe.clear();
  _recipe << old._recipe.str();
  return (*this);
}
