#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "Array.h"
using namespace std;

Array::Array( int arraySize) // default constructor
    : size ( arraySize > 0 ? arraySize : 
                            throw invalid_argument ( "Array size must be greater than 0" ) ),
      ptr ( new int[size])
{
    for ( size_t i = 0; i < size; ++i )
        ptr[i] = 0;
}

// copy constructor for class Array
// must receive a reference to an array
Array::Array (const Array &arrayToCopy) // copy constructor
    :size(arrayToCopy.size),
    ptr ( new int[size])
{
    for ( size_t i = 0; i < size; ++i )
        ptr[i] = arrayToCopy.ptr[i];
}

Array::~Array()
{
    delete [] ptr;
}

size_t Array::getSize() const
{
    return size;
}

const Array &Array::operator=( const Array &right ) //assignment operator
{
    if( &right != this) // avoid self-assignment
    {
        // for Arrays of different sizes, deallocate original
        // left-side Array, then allocate new left-side Array
        if( size != right.size)
        {
            delete [] ptr;
            size = right.size;
            ptr = new int[size];
        }

        for ( size_t i = 0; i < size; ++i )
            ptr[i] = right.ptr[i];
    }

    return *this; // enables x = y = z, for example
}

bool Array::operator==( const Array &right ) const
{
    if(size != right.size)
        return false;
    
    for(size_t i = 0; i < size ; ++i)
        if( ptr[i] != right.ptr[i])
            return false;
    
    return true;
}

// overloaded subscript operator for non-const Array
// reference return creates a modifiable lvalue
int &Array::operator[] (int subscript)
{
    //check for subscript out-of-range error
    if ( subscript < 0 || subscript >= size)
        throw out_of_range( "Subscript out of range");
    
    return ptr[subscript];
}

//overloaded subscript operator for const Arrays
//const reference return creates an rvalue
int Array::operator[] (int subscript) const
{
    //check for subscript out-of-range error
    if ( subscript < 0 || subscript >= size)
        throw out_of_range( "Subscript out of range");
    
    return ptr[subscript];
}

istream &operator>>( istream &input, Array &a )
{
    for(size_t i = 0; i < a.size ; ++i)
        input >> a.ptr[i];
    
    return input; // enables cin >> x >> y
}

ostream &operator<<( ostream &output , const Array &a)
{
    for( size_t i = 0; i < a.size ; ++i)
    {
        output << setw( 12 ) << a.ptr[i];

        if( (i + 1) % 4 == 0)
            output << endl;
    }

    if ( a.size % 4 != 0)
        output << endl;

    return output; // enables cout << x << y;
}