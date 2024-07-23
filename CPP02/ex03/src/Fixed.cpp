/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 02:26:50 by doriani           #+#    #+#             */
/*   Updated: 2023/12/13 20:07:29 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : number(0) {}

Fixed::Fixed(const int n) : number(n << bits) {}

Fixed::Fixed(const float n) : number(roundf(n * (1 << bits))) {}

Fixed::Fixed(const Fixed &arg) { this->setRawBits(arg.getRawBits()); }

Fixed &
Fixed::operator=(const Fixed &arg) {
    this->setRawBits(arg.getRawBits());
    return *this;
}

Fixed::~Fixed(void) {}

int
Fixed::getRawBits(void) const {
    return number;
}

void
Fixed::setRawBits(int const raw) {
    number = raw;
}

float
Fixed::toFloat(void) const {
    return (getRawBits() / (float) (1 << bits));
}

int
Fixed::toInt(void) const {
    return number >> bits;
}

bool
Fixed::operator==(const Fixed &arg) const {
    return getRawBits() == arg.getRawBits();
}

bool
Fixed::operator!=(const Fixed &arg) const {
    return getRawBits() != arg.getRawBits();
}

bool
Fixed::operator>(const Fixed &arg) const {
    return getRawBits() > arg.getRawBits();
}

bool
Fixed::operator<(const Fixed &arg) const {
    return getRawBits() < arg.getRawBits();
}

bool
Fixed::operator>=(const Fixed &arg) const {
    return getRawBits() >= arg.getRawBits();
}

bool
Fixed::operator<=(const Fixed &arg) const {
    return getRawBits() <= arg.getRawBits();
}

Fixed
Fixed::operator+(const Fixed &arg) const {
    return Fixed((toFloat() + arg.toFloat()));
}

Fixed
Fixed::operator-(const Fixed &arg) const {
    return Fixed((toFloat() - arg.toFloat()));
}

Fixed
Fixed::operator*(const Fixed &arg) const {
    return Fixed((toFloat() * arg.toFloat()));
}

Fixed
Fixed::operator/(const Fixed &arg) const {
    return Fixed((toFloat() / arg.toFloat()));
}

// Pre-increment
Fixed &
Fixed::operator++(void) {
    // increment the object
    ++this->number;
    // return the object itself
    return *this;
}

// Post-increment
Fixed
Fixed::operator++(int) {
    // save the current state
    Fixed temp = *this;
    // increment the object
    this->number++;
    // return the old state
    return temp;
}

// Pre-decrement
Fixed &
Fixed::operator--(void) {
    this->number--;
    return *this;
}

// Post-decrement
Fixed
Fixed::operator--(int) {
    Fixed temp = *this;
    this->number--;
    return temp;
}
Fixed &
Fixed::min(Fixed &f1, Fixed &f2) {
    return (f1 < f2 ? f1 : f2);
}

const Fixed &
Fixed::min(const Fixed &f1, const Fixed &f2) {
    return (f1 < f2 ? f1 : f2);
}

Fixed &
Fixed::max(Fixed &f1, Fixed &f2) {
    return (f1 >= f2 ? f1 : f2);
}

const Fixed &
Fixed::max(const Fixed &f1, const Fixed &f2) {
    return (f1 >= f2 ? f1 : f2);
}

std::ostream &
operator<<(std::ostream &stream, const Fixed &arg) {
    stream << arg.toFloat();
    return (stream);
}