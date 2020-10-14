
#ifndef INTEGERSET_H
#define INTEGERSET_H

#include <iostream>
#include <string>
#include <vector>

class IntegerSet{

public :
    IntegerSet(std::vector <bool> & input);
    IntegerSet(bool arr[] , int size);
    void insertElement(int );
    void deleteElement(int );
    void unionOfSets(std::vector<bool>,std::vector<bool>);
    void intersectionOfSets(std::vector<bool>,std::vector<bool>);
    std::vector<bool> retrieveSet(void);
    bool isEqualTo (std::vector <bool> , std::vector <bool>) const;
    void printSet(void);

private :
    std::vector <bool> set;// you can't specify the size here like we do in case of arrays
};

#endif