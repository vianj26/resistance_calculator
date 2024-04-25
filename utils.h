#ifndef UTILS_H
#define UTILS_H

#include <vector>

class Resistor
{
    public:
        long double resistance;

    Resistor(long double resistance);

    //Series Resistors
    Resistor operator &(Resistor resistor);
    //Parallel Resistors
    Resistor operator ||(Resistor resistor);


};


#endif