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

bool Fixed::operator>(const Fixed& other) const {
	return fixedPointValue > other.fixedPointValue;
}

bool Fixed::operator<(const Fixed& other) const {
	return fixedPointValue < other.fixedPointValue;
}

bool Fixed::operator>=(const Fixed& other) const {
	return fixedPointValue >= other.fixedPointValue;
}

bool Fixed::operator<=(const Fixed& other) const {
	return fixedPointValue <= other.fixedPointValue;
}

bool Fixed::operator==(const Fixed& other) const {
	return fixedPointValue == other.fixedPointValue;
}

bool Fixed::operator!=(const Fixed& other) const {
	return fixedPointValue != other.fixedPointValue;
}

Fixed Fixed::operator+(const Fixed& other) const {
	Fixed result;
	result.fixedPointValue = fixedPointValue + other.fixedPointValue;
	return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
	Fixed result;
	result.fixedPointValue = fixedPointValue - other.fixedPointValue;
	return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
	Fixed result;
	result.fixedPointValue = (fixedPointValue * other.fixedPointValue) >> fractionalBits;
	return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
	Fixed result;
	result.fixedPointValue = (fixedPointValue << fractionalBits) / other.fixedPointValue;
	return result;
}

Fixed& Fixed::operator++() {
	fixedPointValue += 1;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	fixedPointValue += 1;
	return temp;
}

Fixed& Fixed::operator--() {
	fixedPointValue -= 1;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	fixedPointValue -= 1;
	return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return (a > b) ? a : b;
}

std::ostream& operator<<(std::ostream& out, const Fixed &obj) {
	out << obj.toFloat();
	return out;
}