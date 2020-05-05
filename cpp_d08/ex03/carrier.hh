//
// carrier.hh for Project-Master in /home/tekm/tek1/cpp_d08/ex03
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Wed Jan 11 20:58:53 2017 leroy_0
// Last update Wed Jan 11 20:58:53 2017 leroy_0
//

#ifndef	__CARRIER_H_
#define	__CARRIER_H_

#include 	<iostream>
#include 	<cstdlib>
#include 	<string>
#include	"droid.hh"
#include 	"droidmemory.hh"

class Carrier
{
	public:
	    Carrier(const std::string id = "");
	    ~Carrier();

	    std::string getId() const;
    	void 		setId(const std::string x);
	    size_t 		getEnergy() const;
	    void 		setEnergy(size_t);
	    size_t 		getAttack() const;
	    size_t 		getToughness() const;
	    size_t 		getSpeed() const;
    	void 		setSpeed(size_t);

    	Carrier& 	operator<<(Droid *&);
    	Carrier& 	operator>>(Droid *&);

    	Droid*& 	operator[](const unsigned int);
    	Droid*		operator[](const unsigned int) const;

    	Carrier&		operator~();
    	bool 			operator()(int, int);

    	Droid 			*Droids[5];
	
	private:
		std::string 	Id;
		size_t 			Energy;
		const size_t	Attack;
		const size_t 	Toughness;
		size_t 			Speed;
	
};

std::ostream& 	operator<<(std::ostream&, const Carrier &);

#endif 	/* _CARRIER_H_ */