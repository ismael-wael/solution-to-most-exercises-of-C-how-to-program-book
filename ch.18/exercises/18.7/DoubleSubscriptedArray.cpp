#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"

using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray( int row, int col) // default constructor
{
    int temp = 0;
    temp = row * col;
    if(temp > 0)
    {
        size = temp;
        rows = row;
        cols = col;
        ptr = new int[size];
        initializeArray();
    }
    else
    {
        throw invalid_argument("Dimensions must be positive.");
    }
}

DoubleSubscriptedArray::DoubleSubscriptedArray (const DoubleSubscriptedArray &obj) // copy constructor
{
    copyArray(obj);
}

DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    delete [] ptr;
}

size_t DoubleSubscriptedArray::getSize() const
{
    return size;
}

int DoubleSubscriptedArray::operator()(size_t row, size_t col)
{
    if((row > 0 && row < rows) && (col > 0 && col < cols))
    {
        return ptr[col+row*cols];
    }
    else
    {
        throw invalid_argument("out of range");
    }
}

int &DoubleSubscriptedArray::operator()(int r, int c)
{
    if((r> 0 && r < rows) && (c > 0 && c < cols))
    {
        return ptr[c+r*cols];
    }
    else
    {
        throw invalid_argument("out of range");
    }
}

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=( const DoubleSubscriptedArray & obj) //assignment operator
{
    if(this != &obj)
    {
        delete[] ptr;
        copyArray(obj);
    }
}

bool DoubleSubscriptedArray::operator==( const DoubleSubscriptedArray & obj) const
{
    if(this != &obj)
    {
        if(size == obj.size)
        {
            for(int i = 0 ; i < size ; i++)
            {
                if(ptr[i] != obj.ptr[i])
                {
                    return false;
                }
            }
            return true;
        }
        return false;
    }
    return true;
}

ostream &operator<<( ostream & output, const DoubleSubscriptedArray & a)
{
    for(int i = 0 ; i < a.size ; ++i)
    {
        output << setw( 12 ) << a.ptr[i];

        if( (i + 1) % a.cols == 0)
            output << endl; 
    }

    if ( a.size % a.cols != 0)
        output << endl;

    return output; // enables cout << x << y;
}

istream &operator>>( istream & input, DoubleSubscriptedArray & a)
{
    for(size_t i = 0; i < a.size ; ++i)
        input >> a.ptr[i];
    
    return input; // enables cin >> x >> y
}

void DoubleSubscriptedArray::printArray()
{
    for(int i = 0 ; i < rows ; i++)
    {
        int x = i * cols;
        for(int j = 0 ; j < cols ; j++)
        {
            cout << ptr[j+x] << "   ";
        }
        cout << endl;
    }
}

void DoubleSubscriptedArray::initializeArray()
{
    for(int i = 0 ; i < size ; i++)
    {
        ptr[i] = i;
    }
}

void DoubleSubscriptedArray::copyArray(const DoubleSubscriptedArray &obj)
{
    size = obj.size;
    rows = obj.rows;
    cols = obj.cols;

    for(int i = 0 ; i < size ; i++)
        ptr[i] = obj.ptr[i];
}