#include "math_lib.h"

int math_lib::add(int a, int b) {
    int result = a + b;
    // Store the result using linked list
    List.append(result);
    return result;
}

int math_lib::multiply(int a, int b) {
    int result = a * b;
    // Store the result using linked list
    List.append(result);
    return result;
}

void math_lib::displayResults() {
    // Display results using linked list
    List.display();
}
