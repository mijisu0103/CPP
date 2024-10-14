#pragma once
#include "B.h" // Include B.h to use B class

class A
{
public:
    A(); // Constructor
    ~A(); // Destructor
};

// Circular dependency issues can arise if both classes include each other's headers.
// To avoid this, use forward declaration for pointers.
