#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal(/* args */);
	Animal(const Animal &oldObj);
	~Animal();
};


#endif
