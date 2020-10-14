#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class DoubleSubscriptedArray
{
    friend std::ostream &operator<<( std::ostream &, const DoubleSubscriptedArray & );
    friend std::istream &operator>>( std::istream &, DoubleSubscriptedArray &);

public:
    explicit DoubleSubscriptedArray( int = 10, int = 10); // default constructor
    DoubleSubscriptedArray (const DoubleSubscriptedArray &); // copy constructor (problem here)
    ~DoubleSubscriptedArray(); 
    size_t getSize() const;

    int operator()(size_t, size_t);
    int &operator()(int, int);
    const DoubleSubscriptedArray &operator=( const DoubleSubscriptedArray & ); //assignment operator
    bool operator==( const DoubleSubscriptedArray & ) const; 

    bool operator!=( const DoubleSubscriptedArray &right ) const
    {
        return ! (*this == right);
    }

    void printArray();

private:
    size_t size;
    size_t rows;
    size_t cols;
    int *ptr;

    void initializeArray();
    void copyArray(const DoubleSubscriptedArray &);
};

#endif