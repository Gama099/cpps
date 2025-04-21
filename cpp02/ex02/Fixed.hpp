#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
	int fixedPointValue;
	static const int  fractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed(const int value);
	Fixed(const float value);
	Fixed& operator=(const Fixed &obj);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

	// Comparison operators
	bool operator>(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;



	// bool operator>(const Fixed& other) const;
	// bool operator<(const Fixed& other) const;
	// bool operator>=(const Fixed& other) const;
	// bool operator<=(const Fixed& other) const;
	// bool operator==(const Fixed& other) const;
	// bool operator!=(const Fixed& other) const;

	// // Arithmetic operators
	// Fixed operator+(const Fixed &other){
	// 	return Fixed(this->fixedPointValue + other.fixedPointValue);
	// }

	Fixed operator+(const Fixed& other) const;
	Fixed operator-(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;

	// // Increment/Decrement operators
	Fixed& operator++();      // Pre-increment
	Fixed operator++(int);    // Post-increment
	Fixed& operator--();      // Pre-decrement
	Fixed operator--(int);    // Post-decrement

	// // Min/Max functions
	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);

	// static Fixed &min(Fixed &a, Fixed &b){
	// 	return (a < b) ? a : b;
	// }

	// static const Fixed &min(const Fixed &a, const Fixed &b){
	// 	return (a < b) ? a : b;
	// }

	// static Fixed &max(Fixed &a, Fixed &b){
	// 	return (a > b) ? a : b;
	// }

	// static const Fixed &max(const Fixed &a, const Fixed &b){
	// 	return (a > b) ? a : b;
	// }

};

std::ostream& operator<<(std::ostream& out, const Fixed &obj);

#endif