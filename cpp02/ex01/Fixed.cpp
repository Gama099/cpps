#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other){
	if (this != &other){
		fixedPoint = other.fixedPoint;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPoint;
}

void Fixed::setRawBits(int const raw){
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = raw;
}

Fixed::Fixed(const int value){
	fixedPoint = value * fractionalBits;
}

Fixed::Fixed(const float value){
	fixedPoint = value * fractionalBits;
}

float Fixed::toFloat(void) const{
	return (float)fixedPoint/256;
}

int Fixed::toInt(void)const{
	return fixedPoint/256;
}
