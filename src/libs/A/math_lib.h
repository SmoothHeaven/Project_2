#ifndef MATH_LIB_H
#define MATH_LIB_H

#include "data_structure_lib.h"

class math_lib {

    public:

    int add(int a, int b);
    int multiply(int a, int b);
    void displayResults();
    
    private:
    
    LinkedList List;
};

#endif
