#pragma once
class A; // Forward declaration to avoid circular dependency

class B
{
private:
    A* a; // Pointer to class A
public: 
    B(); // Constructor
    ~B(); // Destructor
};
