#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj){
	std::cout << "Copy constructor called" << std::endl;
	fixedPointValue = obj.fixedPointValue;
}

Fixed& Fixed::operator=(const Fixed &obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	fixedPointValue = obj.fixedPointValue;
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixedPointValue);
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	fixedPointValue = raw;
}

Fixed::Fixed(const int value){
	std::cout << "Int constructor called" << std::endl;
	fixedPointValue = value << fractionalBits;
}

Fixed::Fixed(const float value){
	std::cout << "Float constructor called" << std::endl;
	fixedPointValue = roundf(value * (1 << fractionalBits));
}

float Fixed::toFloat( void ) const{
	return (float)fixedPointValue / (1 << fractionalBits);
}

int Fixed::toInt( void ) const{
	return fixedPointValue >> fractionalBits;
}

std::ostream& operator<<(std::ostream& out, const Fixed &obj) {
	out << obj.toFloat();
	return out;
}