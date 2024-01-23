#include "math_lib.h"
#include <iostream>

int main() {
    // Create an instance of MathLib
    math_lib mathLib;

    // Use math_lib to perform addition and multiplication
    int sumResult = mathLib.add(3, 4);
    int productResult = mathLib.multiply(5, 6);

    // Display the results using linked list
    std::cout << "Results stored in the linked list:" << std::endl;
    mathLib.displayResults();

    return 0;
}
