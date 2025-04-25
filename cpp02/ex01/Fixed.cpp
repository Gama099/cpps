/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 10:54:47 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/25 10:54:48 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	_raw = other._raw;
}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called" << std::endl;
	_raw = num << _bits;
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor called" << std::endl;
	_raw = roundf(num * (1 << _bits));
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	_raw = other._raw;
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _raw;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_raw = raw;
}

float Fixed::toFloat(void) const {
	return (float)_raw / (1 << _bits);
}

int Fixed::toInt(void) const {
	return _raw >> _bits;
}

std::ostream &operator<<(std::ostream &output, const Fixed &obj) {
	return output << obj.toFloat();
}