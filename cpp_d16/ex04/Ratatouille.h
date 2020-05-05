#ifndef __RATATOUILLE_H_
#define __RATATOUILLE_H_

#include <string>
#include <sstream>
#include <iostream>

class Ratatouille {

public:
    // Canonical class
    Ratatouille();
    Ratatouille(Ratatouille const &);
    ~Ratatouille();
    Ratatouille         &operator=(const Ratatouille &);

    // Member functions allowing to add ingredients in the cooking pot
    Ratatouille         &addVegetable(unsigned char);
    Ratatouille         &addCondiment(unsigned int);
    Ratatouille         &addSpice(double);
    Ratatouille         &addSauce(const std::string &);

    // The member function to extract the dish.
    // The result will be the concatenation of all the added ingredients.
    std::string         kooc(void);
    std::ostringstream _recipe;
};

#endif  /* __RATATOUILLE_H_ */