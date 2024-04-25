#include "utils.h"
#include <iostream>

Resistor::Resistor(long double resistance)
{
    this -> resistance = resistance;
}

Resistor Resistor::operator &(Resistor resistor)
{
    long double sum;
    sum = this->resistance + resistor.resistance;

    Resistor result(sum);

    return result;
    
} 

Resistor Resistor::operator ||(Resistor resistor)
{
    long double sum;

    sum = static_cast<long double>(1/this->resistance) + static_cast<long double>(1/resistor.resistance);

    Resistor result(1/sum);

    return result;
}