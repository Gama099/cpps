#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(){
		type = "Dog";
	};
	~Dog();
};


#endif
