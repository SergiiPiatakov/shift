#ifndef SHIFT_H
#define SHIFT_H

#include <limits>


namespace Shift
{

// Function for Left Cyclic bitwise shift.
// v      - input value;
// sh     - desired shift;
// return - shifted value.
unsigned lcsh (unsigned v, unsigned sh)
{
    constexpr unsigned bits = std::numeric_limits <unsigned>::digits;
    const unsigned ash = sh % bits;
    const unsigned l   = v << ash;
    const unsigned r   = v >> bits - ash;
    return l | r;
}

}//namespace Shift

#endif//SHIFT_H
